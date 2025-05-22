#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

int main(){
	char nombre[100];
	cout<<"Ingrese su nombre en MAYUSCULAS: "<<endl; cin.getline(nombre,100,'\n');
	strupr(nombre);
	if(nombre[0]=='A'){
		strlwr(nombre);
	}
	cout<<"\nSu nombre en minusculas:"<<nombre<<endl;
	getch();
	return 0;
}
