#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

int main(){
	char quetal[] = "Hola, que tal ", nombre[100];
	cout<<"Cual es su nombre? "; cin.getline(nombre,100,'\n');
	strcat(quetal,nombre);
	cout<<"\n"<<quetal<<endl;
	getch();
	return 0;
}
