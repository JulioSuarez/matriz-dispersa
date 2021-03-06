// ---------------------------------------------------------------------------

#ifndef JMatrizSMH
#define JMatrizSMH
// ---------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "Funciones.h"

using namespace std;

class MatrizSM {
private:
	int* vf;
	int* vc;
	int* vd;
	int df;
	int dc;
	int repe;
	int nt;
	int noExiste;

public:
	MatrizSM();
	void dimensionar(int f, int c);
	int dimensionFila();
	int dimensionColumna();
	void poner(int f, int c, int elemento);
	int obtenerElemento(int f, int c);
	void definirValorRepetido(int elemento);
	int obtenerValorRepetido();
	void mostrar();
	bool validar(int numeroMin, int numeroMax);
	int posicion(int f, int c);

};

#endif
