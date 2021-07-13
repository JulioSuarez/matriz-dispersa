// ---------------------------------------------------------------------------

#pragma hdrstop

#include "JMatrizComprimida.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)

MatrizComprimida::MatrizComprimida() {
	df = 0;
	dc = 0;
	repe = 0;
	nt = 0;
	for (int k = 1; df + 1 > k; k++) {
		vf[k] = 1;
	}
	repe = 0;
	nt = 0;
}

void MatrizComprimida::dimensionar(int f, int c) {
	df = f;
	dc = c;
}

int MatrizComprimida::dimensionFila() {
	return df;
}

int MatrizComprimida::dimensionColumna() {
	return dc;
}

int MatrizComprimida::existeElemento(int f, int c) {
	int existeLugar = 0;
	int lugarAntes = 0;
	for (int i = 1; i <= f - 1; i++) {
		lugarAntes = lugarAntes + (vf[i + 1] - vf[i])
	}
	int maxElemFila = (vf[f + 1] - vf[f]);
	for (int j = 1; j < maxElemFila; j++) {
		if (vc[lugarAntes + j] = c) {
			existeLugar = lugarAntes + j;
		}

	}
	return existeLugar;
}

int MatrizComprimida::dondeInserta(int f, int c) {//nos quedamos aqui
}

void MatrizComprimida::poner(int f, int c, int elemento) {

}

int MatrizComprimida::obtenerElemento(int f, int c) {
}

void MatrizComprimida::definirValorRepetido(int elemento) {
	repe = elemento;
}

int MatrizComprimida::obtenerValorRepetido() {
	return repe;
}

void MatrizComprimida::mostrar() {
}

bool MatrizComprimida::validar(int numeroMin, int numeroMax) {
}

int MatrizComprimida::posicion(int f, int c) {
	for (int i = 0; i < nt; i++) {
		if (vf[i] == f && vc[i] == c)
			return i;
	}
	return noExiste;
}
