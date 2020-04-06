//################################################################################
//Pide una cadena y dos caracteres por teclado (valida que sea un car�cter), 
//sustituye la aparici�n del primer car�cter en la cadena por el segundo car�cter.
//################################################################################
//An�lisis
//Leo un cadena y dos caracteres, recorro la cadena, si encuentro un car�cter 
//igual al primer car�cter que he le�do lo sustituyo por el segundo. 
// Datos de entrada: Cadena de caracteres, el car�cter a buscar y a reemplazar.
// Informaci�n de salida: Cadena con el car�cter indicado cambiado por el segundo.
// Variables:cad, newcad, car_buscar, car_sustituir (car�cter), posicion (entero)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad,newcad, car_buscar,car_sustituir;
	int posicion;
	
	cout << "Introduce una cadena:";
	getline(cin,cad);
	newcad=cad;
	do
	{
		cout << "Introduce un car�cter a buscar:";
		getline(cin,car_buscar);
	}
	while(car_buscar.length()!=1);
	do
	{
		cout << "Introduce un car�cter para sustituir:";
		getline(cin,car_sustituir);
	}
	while(car_sustituir.length()!=1);
	
	posicion=newcad.find(car_buscar);
	while (posicion!=-1)
	{
		newcad.replace(posicion,1,car_sustituir);
		posicion=newcad.find(car_buscar,posicion+1);
	}
	
	cout << "La cadena modificada es " << newcad;
	return 0;
}
