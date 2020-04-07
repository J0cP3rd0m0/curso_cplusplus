
//################################################################################
// Queremos crear un programa principal que al introducir una fecha nos diga el 
//d�a juliano que corresponde. 
//################################################################################

#include <iostream>
using namespace std;
//Declaraci�n de la funciones
bool EsBisiesto(int year);
int DiasDelMes(int month,int year);
int Calcular_Dia_Juliano(int day,int month,int year);
void LeerFecha(int &day,int &month, int &year);

int main(int argc, char *argv[]) {
	int d,m,a;
	LeerFecha(d,m,a);
	cout << "D�a Juliano: " << Calcular_Dia_Juliano(d,m,a);
	return 0;
}

//################################################################################
//Funci�n EsBisiesto: Recibe un a�o y devuelve si es o no bisiesto
//Par�metros de entrada: a�o
//Dato devuelto: Valor l�gico indicando si es bisiesto (Verdadero) o no (Falso)
//################################################################################

bool EsBisiesto(int year)
{	
	if(year % 4 == 0 &&  !(year % 100 == 0) || year % 400 == 0)
		return true;
	else
		return false;
}

//################################################################################
//Funci�n DiasDelMes: Recibe un mes y un a�o y devuelve el n�mero de d�as que tiene 
//ese mes en ese a�o. Necesita la funci�n EsBisiesto
//Par�metros de entrada: mes y a�o
//Dato devuelto: D�as del mes en ese a�o
//################################################################################

int DiasDelMes(int month,int year)
{
	int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(EsBisiesto(year))
		dias[1]++;
	return dias[month-1];
}

//################################################################################
//Funci�n Calcular_Dia_Juliano: Recibe un d�a, mes y a�o y devuelve el d�a juliano
//correspondiente a esa fecha. El d�a juliano correspondiente a una fecha es un 
//n�mero entero que indica los d�as que han transcurrido desde el 1 de enero del 
//a�o indicado. Depende de la funci�n DiasDelMes
//Par�metros de entrada: d�a, mes y a�o
//Dato devuelto: D�a juliano
//################################################################################

int Calcular_Dia_Juliano(int day,int month,int year)
{
	int mes;
	int diaj=0;
	for(mes=1;mes<month;mes++)
	{
		diaj += DiasDelMes(mes,year);
	}
	diaj +=  day;
	return diaj;
}

//################################################################################
//Procedimiento LeerFecha: Lee por teclado el d�a, mes y el a�o y lo devuelve
//como par�metro de entrada / salida.
//Par�metros de entrada/salida: d�a, mes y a�o
//################################################################################

void LeerFecha(int &day,int &month, int &year)
{
	cout << "D�a:";
	cin >> day;
	cout << "Mes:";
	cin >> month;
	cout << "A�o:";
	cin >> year;
}
