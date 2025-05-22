#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto
#include <stdlib.h>//arreglos dinamicos y demas

using namespace std;

int hs=0, min=0, seg=0;

struct Etapa{
	int horas;
	int minutos;
	int segundos;
}etapas[3], *etapasPunt = etapas;

void datos();
void calcular_tiempo(Etapa *);

int main(){
	datos();
	calcular_tiempo(etapasPunt);
	getch();
	return 0;
}

void datos(){
	for(int i=0;i<3;i++){
		cout<<"\nTiempo de la "<<i+1<<" etapa:\n";
		cout<<"Horas: "; cin>>(etapasPunt+i)->horas;
		cout<<"Minutos: "; cin>>(etapasPunt+i)->minutos;
		cout<<"Segundos: "; cin>>(etapasPunt+i)->segundos;
	}
}

void calcular_tiempo(Etapa *etapasPunt){
	int horasT=0,minutosT=0,segundosT=0;
	
	for(int i=0;i<3;i++){
		horasT += (etapasPunt+i)->horas; //horasT = horasT + puntero_etapa[i].horas
		minutosT += (etapasPunt+i)->minutos;
		segundosT += (etapasPunt+i)->segundos;
	}
	do{	
		if(minutosT >= 60){//Si los minutos son mayores a 60, significa que ha pasado
			minutosT -= 60;//mas de 1 hora, entonces disminuimos en 60 los minutos
			horasT++;//y aumentamos las horas en 1
		}
		if(segundosT >= 60){//y lo mismo con los segundos
			segundosT -= 60;
			minutosT++; 
		}
	}while(minutosT >= 60 || segundosT >=60);
	
	//Por ultimo mostramos los totales de tiempos en pantalla
	cout<<"\nEl tiempo total es: "<<endl;
	cout<<"Horas: "<<horasT<<endl;
	cout<<"Minutos: "<<minutosT<<endl;
	cout<<"Segundos: "<<segundosT<<endl;
}
