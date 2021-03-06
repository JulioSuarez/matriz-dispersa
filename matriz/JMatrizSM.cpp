// ---------------------------------------------------------------------------

#pragma hdrstop

#include "JMatrizSM.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)

MatrizSM::MatrizSM() {
	vf = new int[0];
	vc = new int[0];
	vd = new int[0];
	df = 0;
	dc = 0;
	repe = 0;
	nt = 0;
	noExiste = -1;
}

void MatrizSM::dimensionar(int f, int c) {
	df = f;
	dc = c;
}

int MatrizSM::dimensionFila() {
	return df;
}

int MatrizSM::dimensionColumna() {
	return dc;
}

bool MatrizSM::validar(int numeroMin, int numeroMax) {
	if (numeroMin >= 1 && numeroMin <= numeroMax) {
		return true;
	}
	return false;
}

int MatrizSM::posicion(int f, int c) {
	for (int i = 0; i < nt; i++) {
		if (vf[i] == f && vc[i] == c)
			return i;
	}
	return noExiste;
}

void MatrizSM::poner(int f, int c, int elemento) {
	if (validar(f, df) && validar(c, dc)) {
		int lugar = posicion(f, c);
		if (lugar == noExiste) // lugar es -1
		{
			if (nt < (df * dc)) // nt < dimension
			{
				if (elemento != repe) { // que el elemento no sea repe
					vd[nt] = elemento; // en la posicion se inserta el elemento
					vf[nt] = f; // en esa posicion se inserta la fila
					vc[nt] = c; // en esa posicion se inserta la columna
					nt++; // la posicion incrementa
				}
				else { // quiere insertar un repe
					cout << "elemento repetido\n";
					vd[lugar] = elemento; // en ese lugar inserta el elemento
					for (int i = lugar; i < nt; i++)
					{ // recorre desde ese lugar hacia el final(nt)
						vf[i] = vf[i + 1]; // recorre
						vc[i] = vc[i + 1]; // recorre
						vd[i] = vd[i + 1]; // recorre
					}
					nt--; // decrementa la posicion
				}
			}
			else {
				cout << "Rango invalido\n";
			}
		}
		else {
			cout << "lugar es -1\n";
		}
	}
	else {
		cout << "Rango invalido f:" + to_string(f) + " c:" +
			to_string(c) + "\n";
	}
}

int MatrizSM::obtenerElemento(int f, int c) {
	if (validar(f, df) && validar(c, dc)) {
		int lugar = posicion(f, c);
		if (lugar > 0) {
			return vd[lugar];
		}
		else {
			return repe;
		}
	}
	else {
		cout << "Rango invalido f:" + to_string(f) + " c:" +
			to_string(c) + "\n";
	}
}

void MatrizSM::definirValorRepetido(int elemento) {
	repe = elemento;
}

int MatrizSM::obtenerValorRepetido() {
	return repe;
}

void MatrizSM::mostrar() {
	string r = "Matriz:\n";
	for (int i = 1; i <= df; i++) {
		r += "| ";
		for (int j = 1; j <= dc; j++) {
			int e = obtenerElemento(i, j);
			r += to_string(e) + "  ";
		}
		r += "|\n";
	}
	r += "\nNT: " + to_string(nt) + "\n";
	cout << r;
}
