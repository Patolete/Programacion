#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
//#include <string.h>//Libreria para cadenas de texto

using namespace std;

int escribeNumeros(int,int);

int main(){
	int ini, fin;
	cout<<"Ingrese el inicio de los numeros a escribir: ";
	cin>>ini;
	cout<<"Ingrese el final de los numeros a escribir: ";
	cin>>fin;
	for(int i=ini;i<=fin;i++){
		cout<<escribeNumeros(i,fin)<<" ";
	}
	getch();
	return 0;
}

int escribeNumeros(int ini, int fin){
	if(ini == fin){
		return ini;
	}
	else{
		return escribeNumeros(ini,fin-1);
	}
}
