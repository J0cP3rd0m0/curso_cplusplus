//################################################################################
//Realizar un programa que dada una cadena de caracteres por caracteres, genere 
//otra cadena resultado de invertir la primera.
//################################################################################
//An�lisis
//Leemos una cadena, la recorremos desde el final al principio y cada car�cter 
//lo vamos concatenando con una nueva cadena, que inicialmente tendr� como valor
//la cadena vac�a�.
// Datos de entrada: Una cadena de caracteres.
// Informaci�n de salida: La cadena invertida.
// Variables: cad,invertida (Caracter)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string str6,cad,invertida="";
	str6 = "0123456789"; 
	
	//  replace(a, b, str)  replaces b characters from a index by str 
	str6.replace(9, 1,str('b')); 
	
	cout << str6 << endl; 
	return 0;
}
