#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

void calcAnios(int,int,int,int&,int&,int&);

int main(){
	int dia,mes,anio,dias,meses,anios;
	cout<<"Ingrese el dia, el mes y el año separados por un espacio: "; cin>>dia>>mes>>anio;
	calcAnios(dia,mes,anio,dias,meses,anios);
	cout<<"\nDias pasados desde el 1/1/2000: "<<dias;
	getch();
	return 0;
}

void calcAnios(int dia,int mes,int anio,int& dias,int& meses,int& anios){
	dias = dia - 1;
	meses = mes - 1;
	anios = anio - 2000;
	dias += 30*meses;
	dias += 360*anios;
}
