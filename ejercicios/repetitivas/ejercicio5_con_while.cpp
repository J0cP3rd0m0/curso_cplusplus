//################################################################################
//Algoritmo que pida caracteres e imprima 'VOCAL' si son vocales y 'NO VOCAL' 
//en caso contrario, el programa termina cuando se introduce un espacio.
//################################################################################
//An�lisis
//Leer un car�cter hasta que sea el espacio.
//Si el car�cter no es espacio -> si es una vocal -> Muestro "Es vocal"
//Si no muestro "No es vocal"
// Datos de entrada:vamos leyendo un car�cter.
// Informaci�n de salida:Mensajes: "Es vocal", "No es vocal"
// Variables:car (caracter)
//################################################################################
//Dise�o
//1.- Repetir -> Leer car�cter
//2.- Mientras no sea espacio
//		3.- Si car no es el espacio
//		4.- Si es A,E,I,O,U o a,e,i,o,u -> Mostrar "Es vocal"
//		5.-Si no mostrar "No es vocal"
//		6.- Repetir -> Leer car�cter
//################################################################################
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	string car;
	do {
		cout << "Introduce un car�cter:";
		cin >> car;
	}
	while(car.size()!=1);
	while(car!= " ") {
		
		cout << "Introduce un car�cter:";
		cin >> car;
	}
}

