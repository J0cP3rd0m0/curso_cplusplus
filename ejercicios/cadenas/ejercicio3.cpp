//################################################################################
//Pide una cadena y un car�cter por teclado (valida que sea un car�cter) 
//y muestra cuantas veces aparece el car�cter en la cadena.
//################################################################################
//An�lisis
//Leo una cadena y un car�cter (tengo que asegurarme que es un s�lo car�cter,
//es decir hasta que la longitud sea 1). Recorro la cadena y compara cada uno de
//sus caracteres con el car�cter introducido, si es igual lo cuento.
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

	for(posicion=0;posicion<cad.length();posicion++)
	{
		if(cad[posicion]==car)
			cont++;
	}
	
	cout << "En la cadena " << cad << " aparecen " << cont << " veces el car�cter " << car << ".";
	return 0;
}
/* Este ejercicio tambi�n se puede hacer con el m�todo find de string, �ntentalo y si tienes dudas me lo preguntas*/
