//################################################################################
//Dado un n�mero de dos cifras, diseñe un algoritmo que permita obtener el 
//n�mero invertido. 
//################################################################################
//An�lisis
//Se pide un n�mero de dos cifras y se debe mostrar el n�mero de centenas 
//y de unidades
//Datos de entrada: el n�mero (entero).
//Informaci�n de salida: primera cifra, segunda cifra (enteros)
//Variables: num, decenas, unidades (entero)
//################################################################################
//Dise�o
//1. Leer el n�mero de dos cifras (en estos momentos no podemos determinar que el 
//   n�mero es de dos cifras)
//2. Calcular decenas: divisi�n entera del n�mero entre 10.
//3. Calcular unidades: resto de dividir el n�mero entre 10.
//4. Mostrar decenas y unidades
//################################################################################

#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int decenas;
	int num;
	int unidades;
	cout << "Dime un n�mero de dos cifras" << endl;
	cin >> num;
	decenas = num/10;
	unidades = num%10;
	cout << "Primera cifra (decenas): " << decenas << endl;
	cout << "Segunda cifra (unidades): " << unidades << endl;
	return 0;
}
