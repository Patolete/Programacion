#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void editar();

int main() {
	editar();
    getch();
    return 0;
}

void editar(){
	ofstream archivo;
	string nombre, texto, rspt;
	cout<<"Nombre del archivo: "; getline(cin,nombre);
	archivo.open(nombre.c_str(),ios::app);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo"<<endl;
		exit(1);
	}
	do{
		cout<<"\nIngrese el texto a aniadir al archivo: "; getline(cin, texto);
		cout<<"\nDesea seguir agregando texto al archivo(s/n)? "; getline(cin, rspt);
		archivo<<texto<<endl;
	}while((rspt == "s")||(rspt == "S"));
}
