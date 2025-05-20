#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int todos = 0, examen = 0, ultExamen = 0, a;
	cout<<"1. Un examen";
	cout<<"\n2. El examen final";
	cout<<"\n3. Todos los examenes";
	for(int i = 0; i < 5; i++){
		cout<<"\nDigite que examenes aprobo un alumno: "<<endl; cin>>a;
		if(a == 1){
			examen += 1;
		}
		else if(a == 2){
			ultExamen += 1;
		}
		else{
			todos += 1;
		}
	}
	
	cout<<"\nAlumnos que aprobaron todo: "<<todos<<endl;
	cout<<"\nAlumnos que aprobaron solo el ultimo examen: "<<ultExamen<<endl;
	cout<<"\nAlumnos que aprobaron solo un examen: "<<examen<<endl;
	
	getch();
	return 0;
}
