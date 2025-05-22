#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

void datos();
float decimales(float x);

float num;

int main(){
	datos();
	cout<<"Decimales del numero: "<<decimales(num)<<endl;
	getch();
	return 0;
}
void datos(){
	cout<<"Digite un numero"<<endl; cin>>num;
}
float decimales(float x){
	int entero = x;
	float resultado = x - entero;
	return resultado;
}
