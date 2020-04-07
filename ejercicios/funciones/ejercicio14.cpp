//################################################################################
//Realiza un programa principal que nos permita usar funciones para manipular pilas.
//################################################################################

#include <iostream>
using namespace std;
//Declaraci�n de la funciones
void InicializarPila(string pila[], int size_pila);
int LongitudPila(string pila[],int size_pila);
bool EstaVaciaPila(string pila[],int size_pila);
bool EstaLlenaPila(string pila[],int size_pila);
void AddPila(string cad, string pila[],int size_pila);
string SacarDeLaPila(string pila[],int size_pila);
void EscribirPila(string pila[],int size_pila);

int main(int argc, char *argv[]) {
	string mipila[10];
	int tam_pila;
	string elem;
	int opcion;
	tam_pila=10;
	InicializarPila(mipila,tam_pila);
	do
	{
		cout << "1.- A�adir elemento a la pila" << endl;
		cout << "2.- Sacar elemento de la pila" << endl;
		cout << "3.- Longitud de la pila" << endl;
		cout << "4.- Mostrar pila" << endl;
		cout << "5.- Salir" << endl;
		cin >> opcion;
		cin.ignore();
		switch(opcion)
		{
			case 1:
				cout << "Dame la cadena para a�adir a la pila:";
				getline(cin,elem);
				AddPila(elem,mipila,tam_pila);
				break;
			case 2:
				cout << SacarDeLaPila(mipila,tam_pila) << endl;
				break;
			case 3:
				cout << "Longitud: " << LongitudPila(mipila,tam_pila) << endl;
				break;
			case 4:
				EscribirPila(mipila,tam_pila);
				break;
			case 5:
			    break;
				
			default:
				cout << "Opci�n incorrecta" << endl;
		}
	}	
	while(opcion!=5);
	return 0;
}
//################################################################################
//Procedimiento IncializarPila: Recibe un vector (pila) y su tama�o. 
//Recorre el vector e inicializa sus elementos a *. 
//El * representa que el elemento est� vac�o.
//Par�metros de entrada: Tama�o del vector
//Par�metros de entrada y salida: El vector (pila)
//################################################################################

void InicializarPila(string pila[], int size_pila)
{
	int i;
	for(i=0;i<size_pila;i++)
		pila[i]="*";
}

//################################################################################
//Funci�n LongitudPila: Recibe un vector (pila) y su tama�o. 
//Devuelve un contador con los elementos de la pila.
//Recorre el vector mientras no encuentre un * o llegue al final.
//Par�metros de entrada: Tama�o del vector, el vector (pila)
//################################################################################

int LongitudPila(string pila[],int size_pila)
{
	int size;
	size=0;
	while(size<size_pila && pila[size]!="*")
		size++;
	return size;
}

//################################################################################
//Funci�n EstaVaciaPila: Recibe un vector (pila) y su tama�o. 
//Devuelve un valor l�gico indicando si la pila est� vac�a.
//Est� vac�a si la longitud es 0.
//Par�metros de entrada: Tama�o del vector, el vector (pila)
//################################################################################

bool EstaVaciaPila(string pila[],int size_pila)
{
	if(LongitudPila(pila,size_pila)==0)
		return true;
	else
		return false;
}
//################################################################################
//Funci�n EstaLlenaPila: Recibe un vector (pila) y su tama�o. 
//Devuelve un valor l�gico indicando si la pila est� llena.
//Est� llena si la longitud es igual al tama�o del vector.
//Par�metros de entrada: Tama�o del vector, el vector (pila)
//################################################################################

bool EstaLlenaPila(string pila[],int size_pila)
{
	if(LongitudPila(pila,size_pila)==size_pila)
		return true;
	else
		return false;
}

//################################################################################
//Procedimiento AddPila: Recibe un vector (pila), su tama�o y un elemento (cadena)
//Si no esta llena, a�ade el elemento en la siguiente posici�n vac�a,
//cuyo indice es igual a la Longitud de la pila.
//Si est� llena, escribe un mensaje de error.
//Par�metro de entrada:Tama�o del vector y el elemento.
//Par�metros de entrada y salida: El vector (pila)
//################################################################################

void AddPila(string cad, string pila[],int size_pila)
{
	if(!EstaLlenaPila(pila,size_pila))
		pila[LongitudPila(pila,size_pila)]=cad;
	else
		cout << "No se puede a�adir elemento. La pila est� llena" << endl;
}


//################################################################################
//Funci�n SacarPila: Recibe un vector (pila), su tama�o y devuelve 
//el elemento que se ha introducido en �ltimo lugar, si no est� vac�a.
//El �ndice de ese elemento ser� la longitud de la pila - 1
//El elemento en esa posici�n se vac�a, es decir se inicializa a "*".
//Si est� vac�a, escribe un mensaje de error.
//Par�metro de entrada:Tama�o del vector y el elemento.
//Par�metros de entrada y salida: El vector (pila)
//Dato devuelto: El elemento 
//################################################################################

string SacarDeLaPila(string pila[],int size_pila)
{
	string cad;
	if(!EstaVaciaPila(pila,size_pila))
	{
		cad=pila[LongitudPila(pila,size_pila)-1];
		pila[LongitudPila(pila,size_pila)-1]="*";
	}
	else
	{
		cout << "No se puede sacar elemento. La pila est� vacia" << endl;
		cad="";	
	}
	return cad;
}
//################################################################################
//Funci�n EscribirPila: Recibe un vector (pila) y su tama�o. 
//Muestra los elementos del vector hasta que llegue al final o se encuentre un *.
//Par�metros de entrada: Tama�o del vector, el vector (pila)
//################################################################################

void EscribirPila(string pila[],int size_pila)
{
	int i;
	i=0;
	while(i<size_pila && pila[i]!="*")
	{
		cout << pila[i] << " ";
		i++;
	}
	cout << endl;
}

