#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int tamano;
	int *arreglo;
	int contador;
	srand(time(NULL));
	cout << "Tamaño del arreglo: ";
	tamano=rand()%10+1;
	cout<<tamano<<endl;
	// Reserva el tamaño en bytes
	arreglo = new int[tamano];

	for (contador = 0; contador < tamano; contador++) {
		arreglo[contador] = rand()%100+11 ;
	}

	cout << "El arreglo es: ";
	for (contador = 0; contador < tamano; contador++) {
		cout << arreglo[contador] << ", ";
	}
	cout << endl;

	delete [] arreglo;
	return 0;
}
