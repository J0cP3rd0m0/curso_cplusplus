//################################################################################
//Programa que lea una cadena por teclado y compruebe si la primera letra es una 
//letra may�scula.
//################################################################################
// An�lisis
// Pedimos por teclado una cadena 
//y hay que comprobar que la primera letra sea may�sculas.
// Datos de entrada: cadena (cadena)
// Informaci�n de salida: Mensajes de es may�sculas o no es may�sculas.
// Variables: cadena (cadena)
//################################################################################
// Dise�o
// 1. Leer la cadena
// 2. Si la primera letra de la cadena es may�sculas, 
//	  mostrar "La cadena es may�sculas"
// 3. En caso contrario mostrar "La cadena no es may�sculas"
//################################################################################
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    string cad;
    cout << "Introduce una cadena:";
	cin >> cad;
    if (isupper(cad[0]))
    {
		cout << "La cadena es may�sculas";
    }
    else
    {
		cout << "La cadena no es may�sculas";
    }
    return 0;
}
