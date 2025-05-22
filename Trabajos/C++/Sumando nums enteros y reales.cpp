#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto
#include <stdlib.h>//Libreria para atoi y atof

using namespace std;

int main(){
	char enteros[100],flotantes[100];
	int numInt;
	float numFloat;
	cout<<"Ingrese un numero entero: "<<endl; cin.getline(enteros,100,'\n');
	cout<<"Ingrese un numero real: "<<endl; cin.getline(flotantes,100,'\n');
	numInt = atoi(enteros);
	numFloat = atof(flotantes);
	numFloat += numInt;
	cout<<"La suma de estos numeros es: "<<numFloat<<endl;
	getch();
	return 0;
}
