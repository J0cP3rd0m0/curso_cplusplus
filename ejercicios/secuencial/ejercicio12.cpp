//################################################################################
//Pide al usuario dos pares de n�meros x1,y2 y x2,y2, que representen dos puntos 
//en el plano. Calcula y muestra la distancia entre ellos.
//################################################################################
//An�lisis
//Se piden dos puntos y se calcula la distancia entre ellos. 
//Datos de entrada: dos puntos; cuatro coordenadas (x1,y1) (x2,y2) (entero).
//Informaci�n de salida: distancia (real).
//Variables: x1,y1,x2,y2(entero), distancia(real).
//################################################################################
//Dise�o
//1. Leer las cuatro coordenadas.
//2. Calcular distancia: ra�z cuadrada de (x2-x1)^2 + (y2-y1)^2
//3. Mostrar distancia 
//################################################################################

#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char *argv[]) {
	float distancia;
	int x1, x2, y1, y2;
	cout << "Dime las coordenadas del punto 1:" << endl;
	cin >> x1;
	cin >> y1;
	cout << "Dime las coordenadas del punto 2:" << endl;
	cin >> x2;
	cin >> y2;
	distancia = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	cout << "Distancia:" << distancia << endl;
	return 0;
}