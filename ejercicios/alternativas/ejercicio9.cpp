//################################################################################
//Algoritmo que pida tres n�meros y los muestre ordenados (de mayor a menor);
//################################################################################
// An�lisis
// Pedimos por teclado tres n�meros, se comparan para mostrarlos ordenados.
// Datos de entrada: num1, num2, num3 (entero)
// Informaci�n de salida: Los tres n�mero ordenados de mayor a menor
// Variables: num1, num2, num3 (entero)
//################################################################################
// Dise�o
// 1. Leer num1,num2,num3
// 2. Si num1>num2>num3 mostrar num1,num2,num3
// 3. Si num2>num1>num3 mostrar num2,num1,num3
// 4. Si num2>num3>num1 mostrar num2,num3,num1
// 5. Si num3>num2>num1 mostrar num3,num2,num1
// 6. Si num3>num1>num2 mostrar num3,num1,num2
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1,num2,num3;
	cout << "Dime el n�mero 1:";
	cin >> num1;
	cout << "Dime el n�mero 2:";
	cin >> num2;
	cout << "Dime el n�mero 3:";
	cin >> num3;
	if(num1>num2 && num1>num3)
	{
		if(num2>num3)
		{
			cout << num1 << " " << num2 << " " << num3;
		}
		else
		{
			cout << num1 << " " << num3 << " " << num2;
		}
	}
	if(num2>num1 && num2>num3)
	{
		if(num1>num3)
		{
			cout << num2 << " " << num1 << " " << num3;
		}
		else
		{
			cout << num2 << " " << num3 << " " << num1;
		}
	}
	if(num3>num1 && num3>num2)
	{
		if(num1>num2)
		{
			cout << num3 << " " << num1 << " " << num2;
		}
		else
		{
			cout << num3 << " " << num2 << " " << num1;
		}
	}
}
