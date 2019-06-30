//################################################################################
//Algoritmo que pida dos n�meros 'nota' y 'edad' y un car�cter 'sexo' 
//y muestre el mensaje 'ACEPTADA' si la nota es mayor o igual a cinco, 
//la edad es mayor o igual a dieciocho y el sexo es 'F'. 
//En caso de que se cumpla lo mismo, pero el sexo sea 'M', debe imprimir 'POSIBLE'. 
//Si no se cumplen dichas condiciones se debe mostrar 'NO ACEPTADA'.
//################################################################################
// An�lisis
// Pedimos por teclado dos n�meros: nota y edad y un car�cter sexo.
// Se muestra "ACEPTADA" si nota>=5, edad>=18 y el sexo es femenino.
// Si se cumple las mismas condiciones pero con el sexo masculino -> "POSIBLE"
// en caso contrario se muestra "NO ACEPTADA"
// Datos de entrada: nota, edad (entero) y sexo (cadena)
// Informaci�n de salida: Mensaje de informaci�n
// Variables: nota, edad (entero) y sexo (cadena)
//################################################################################
// Dise�o
// 1. Leer la nota, la edad y el sexo
// 2. si nota>=5, edad>=18 
// 3. si sexo="F" mostrar "ACEPTADA"
// 4. si sexo="M" mostrar "POSIBLE"
// 5. En caso contrario, mostrar "NO ACEPTADA"
//################################################################################

#include <iostream>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[]) {
	int nota,edad;
	char sexo;
	cout << "Introduce la nota:" << endl;
	cin >> nota;
	cout << "Introduce la edad:" << endl;
	cin >> edad;
	cout << "Introduce el sexo (F/M):" << endl;
	cin >> sexo;

	if (nota>=5 && edad>=18)
	{
		if(toupper(sexo)=='F')
		{
			cout << "Aceptada";
		}
		else
		{
			if(toupper(sexo)=='F')
			{
				cout << "Posible";
			}
			else
			{
				cout << "No Aceptada";
			}
		}
	}
}
