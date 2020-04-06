//################################################################################
//Realizar un programa que compruebe si una cadena contiene una subcadena.
// Las dos cadenas se introducen por teclado.
//################################################################################
//An�lisis
//Leo dos cadenas. Voy a utilizar el m�todo find.
// Informaci�n de salida: Mensaje indicando si la cadea contiene la subcadena o no.
// Variables:cad, subcad  (car�cter), num_subcadenas,nsubc (entero), 
//			 indicador (l�gico)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad, subcad;
	cout <<  "Introduce una cadena:";
	getline(cin,cad);
	cout <<  "Introduce una subcadena:";
	getline(cin,subcad);
	if(cad.find(subcad)!=-1)
		cout << "La cadena contiene la subcadena.";
	else
		cout << "La cadena no contiene la subcadena.";
	return 0;
}
