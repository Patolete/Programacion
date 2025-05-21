#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
}a[3];

int main(){
	for(int i=0;i<3;i++){
		cout<<"Nombre del alumno "<<i+1<<": "<<endl; cin.getline(a[i].nombre,20,'\n');
		cout<<"Edad del alumno "<<i+1<<": "<<endl; cin>>a[i].edad;
		cout<<"Promedio del alumno "<<i+1<<": "<<endl; cin>>a[i].promedio;
		fflush(stdin);
	}
	if(a[0].promedio > a[1].promedio && a[0].promedio > a[2].promedio){
		cout<<"Nombre del alumno 1: "<<a[0].nombre<<endl;
		cout<<"Edad del alumno 1: "<<a[0].edad<<endl;
		cout<<"Promedio del alumno 1: "<<a[0].promedio<<endl;
	}
	else if(a[1].promedio > a[0].promedio && a[1].promedio > a[2].promedio){
		cout<<"Nombre del alumno 2: "<<a[1].nombre<<endl;
		cout<<"Edad del alumno 2: "<<a[1].edad<<endl;
		cout<<"Promedio del alumno 2: "<<a[1].promedio<<endl;
	}
	else{
		cout<<"Nombre del alumno 3: "<<a[2].nombre<<endl;
		cout<<"Edad del alumno 3: "<<a[2].edad<<endl;
		cout<<"Promedio del alumno 3: "<<a[2].promedio<<endl;
	}
	getch();
	return 0;
}
