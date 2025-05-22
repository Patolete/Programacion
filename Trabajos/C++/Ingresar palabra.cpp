#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

int main(){
	char palabra[100];
	cout<<"Ingrese una palabra: "<<endl; gets(palabra);
	if(strlen(palabra) >= 10){
		cout<<palabra;
	}
	else{
		cout<<palabra<<" es demaciado corta";
	}
	getch();
	return 0;
}
