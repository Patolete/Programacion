#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

int main(){
	char palabra[100],palabra2[100];
	cout<<"Ingrese una palabra: "<<endl; gets(palabra);
	strcpy(palabra2,palabra);
	cout<<"\n"<<palabra2<<endl;
	getch();
	return 0;
}
