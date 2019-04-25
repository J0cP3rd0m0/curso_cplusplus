//################################################################################
//Calcular el per�metro y �rea de un rect�ngulo dada su base y su altura.
//################################################################################
//An�lisis
//Tenemos que leer la base y la altura del triangulo y calcular el per�metro y el 
//�rea
//Datos de entrada: base(real), altura(real)
//Informaci�n de salida: per�metro(real) y �rea(real)
//Variables: base, altura, perimetro y area (Real)
//################################################################################
//Dise�o
//1. Leer base y altura
//2. Calcular per�metro(2*base + 2*altura)
//3. Calcular �rea (base * altura
//4. Mostrar per�metro y �rea
//################################################################################
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float base,altura,perimetro,area;
	cout << "Introduce la base:";
	cin >> base;
	cout << "Introduce la altura:";
	cin >> altura;
	perimetro = 2 * base + 2 * altura;
	area = base * altura;
	cout << "El per�metro es " << perimetro << " y el �rea es " << area << endl;
	return 0;
}

