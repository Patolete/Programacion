#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

struct Personas{
	char nombre[20];
	char discapacidad[2];
}persona[100];

int main(){
	int canPersonas = 0, discapacitados[100], noDiscapacitados[100], cont = 0, cont2 = 0, i = 0;
	cout<<"Cantidad de personas: "<<endl; cin>>canPersonas;
	for(i=0;i<canPersonas;i++){
		fflush(stdin);
		cout<<"Nombre: "<<endl; cin.getline(persona[i].nombre,20,'\n');
		cout<<"Tiene algun tipo de discapacidad? "<<endl; cin.getline(persona[i].discapacidad,'\n');
		if(persona[i].discapacidad == "Si" || persona[i].discapacidad == "si"){
			discapacitados[i] = i;
			cont++;
		}
		else{
			discapacitados[i] = i;
			cont2++;
		}
		cout<<"\n";
	}
	fflush(stdin);
	cout<<"Gente con algun tipo de discapacidad: ";
	for(i=0;i<cont;i++){
		cout<<i+1<<". "<<persona[discapacitados[i]].nombre<<endl;
	}
	cout<<"\nGente con ningun tipo de discapacidad: ";
	for(i=0;i<cont2;i++){
		cout<<i+1<<". "<<persona[noDiscapacitados[i]].nombre<<endl;
	}
	getch();
	return 0;
}
