//################################################################################
//Pide una cadena y un car�cter por teclado (valida que sea un car�cter) 
//y muestra cuantas veces aparece el car�cter en la cadena.
//################################################################################
//An�lisis
//Leo una cadena y un car�cter. Mientras encuentre el car�cter en la cadena cuento 
//la aparici�n del car�cter.
// Datos de entrada: Cadena y car�cter
// Informaci�n de salida: N�mero de veces que aparece el car�cter en la cadena.
// Variables: cad, car (caracter), posicion, cont (entero)
//################################################################################


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad;
	char car;
	int posicion,cont=0;
	
	cout << "Introduce una cadena:";
	getline(cin,cad);
	cout << "Introduce un car�cter:";
	cin >> car;

	posicion=cad.find(car);
	while (posicion!=-1)
	{
		cont++;
		posicion=cad.find(car,posicion+1);
	}
	cout << "En la cadena " << cad << " aparecen " << cont << " veces el car�cter " << car << ".";
	return 0;
}

