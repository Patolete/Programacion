#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

float num;

void pedirDatos();
void al_cuadrado(float x);

int main(){
	pedirDatos();
	al_cuadrado(num);
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Ingrese un numero: "<<endl; cin>>num;
}
void al_cuadrado(float x){
	x = num * num;
	cout<<"El cuadrado de este numero: "<<x<<endl;
}
