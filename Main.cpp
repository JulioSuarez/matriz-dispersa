#include <iostream>

#include "UMemoria.h"

#include "UMatrizV.h"

using namespace std;

 int main()
{
	CSMemoria* mem = new CSMemoria();
	MatrizV* matriz = new MatrizV();
	matriz->dimensionar(5, 5);
	matriz->poner(1,1,7);
	matriz->poner(3,3,7);
	matriz->poner(7,7,7);
	matriz->to_str();
	//mem->mostrar();

	system("pause");
	return 0;
}
