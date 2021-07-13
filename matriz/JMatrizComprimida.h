// ---------------------------------------------------------------------------

#ifndef JMatrizComprimidaH
#define JMatrizComprimidaH
// ---------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "Funciones.h"

using namespace std;

class MatrizComprimida {
private:
	int* vf;
	int* vc;
	int* vd;
	int df;
	int dc;
	int repe;
	int nt;

	// busca en vd,vc y vf si existe el elemento
	int existeElemento(int f, int c);
	// determina donde insertar en vd,vc y vf
	int dondeInsertar(int f, int c);

public:
	MatrizComprimida();
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
	int existeElemento(int f, int c);
	int dondeInserta(int f, int c);

};

#endif
