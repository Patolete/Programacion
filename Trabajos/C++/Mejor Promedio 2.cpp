#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

struct promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct alumnos{
	char nombre[20];
	int edad;
	float promedio;
	struct promedio prom;
}alumno[1000];

int main(){
	int canAlumnos = 0, posM = 0;
	float max = 0;
	cout<<"Cantidad de alumnos: "<<endl; cin>>canAlumnos;
	for(int i=0;i<canAlumnos;i++){
		fflush(stdin);
		cout<<i+1<<". Nombre del alumno: "<<endl; cin.getline(alumno[i].nombre,20,'\n');
		cout<<i+1<<". Edad del alumno: "<<endl; cin>>alumno[i].edad;
		cout<<"Nota 1: "<<endl; cin>>alumno[i].prom.nota1;
		cout<<"Nota 2: "<<endl; cin>>alumno[i].prom.nota2;
		cout<<"Nota 3: "<<endl; cin>>alumno[i].prom.nota3;
		alumno[i].promedio = (alumno[i].prom.nota1 + alumno[i].prom.nota2 + alumno[i].prom.nota3)/3;
		if(alumno[i].promedio > max){
			max = alumno[i].promedio;
			posM = i;
		}
	}
	cout<<"\nAlumno con mejor promedio: "<<endl;
	cout<<"Nombre: "<<alumno[posM].nombre<<endl;
	cout<<"Edad: "<<alumno[posM].edad<<endl;
	cout<<"Promedio: "<<alumno[posM].promedio<<endl;
	getch();
	return 0;
}
