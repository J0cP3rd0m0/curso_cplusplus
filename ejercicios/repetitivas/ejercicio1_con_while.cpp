//################################################################################
//Crea una aplicaci�n que pida un n�mero y calcule su factorial (El factorial de 
//un n�mero es el producto de todos los enteros entre 1 y el propio n�mero y se 
//representa por el n�mero seguido de un signo de exclamaci�n. 
//Por ejemplo 5! = 1x2x3x4x5=120)
//################################################################################
//An�lisis
// Necesito acumular las sucesivas multiplicaciones, empezando por 2 hasta el 
// n�mero indicado.
// Datos de entrada: n�mero al que calcular el factorial
//					 contador para in contando los n�meros desde 2 al n�mero
// Informaci�n de salida:El resultado del factorial
// Variables:num,contador(entero), resultado (real)
//################################################################################
//Dise�o
// 1.Leer numero
// 2. Incializo variables
// contador = 2
// resultado = 1
// 3. Mientras contador<=num hacer
// 4.	resultado=resultado*contador
// 5.	contador=contador+1
// 6. Mostrar resultado
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num,contador;
	float resultado = 1;
	cout << "Dime un n�mero:" << endl;
	cin >> num;
	contador = 2;
	while (contador<=num) {
		resultado = resultado * contador;
		contador = contador + 1;
	}
	cout << "El resultado es " << resultado;
	return 0;
}
