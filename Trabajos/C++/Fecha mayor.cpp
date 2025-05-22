#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

struct fechas{
	int dia, mes, anio;
}f1,f2;

void pedirFechas();
fechas Mayor(fechas,fechas);
void mostrarFechaMayor(fechas);

int main(){
	pedirFechas();
	fechas x = Mayor(f1,f2);
	mostrarFechaMayor(x);
	
	getch();
	return 0;
}

void pedirFechas(){
	cout<<"Fecha N1: "<<endl;
	cout<<"Dia: "; cin>>f1.dia;
	cout<<"Mes: "; cin>>f1.mes;
	cout<<"Anio: "; cin>>f1.anio;
	
	cout<<"Fecha N2: "<<endl;
	cout<<"Dia: "; cin>>f2.dia;
	cout<<"Mes: "; cin>>f2.mes;
	cout<<"Anio: "; cin>>f2.anio;
}
fechas Mayor(fechas f1,fechas f2){
	fechas mayorFecha;
	if((f1.anio>f2.anio) || ((f1.mes>f2.mes)&&(f1.anio==f2.anio))){
		mayorFecha = f1;
	}
	else{
		mayorFecha = f2;
	}
	return mayorFecha;
}
void mostrarFechaMayor(fechas x){
	cout<<"\nMostrando fecha mayor: "<<x.dia<<"/"<<x.mes<<"/"<<x.anio<<endl;
}








