#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

int main(){
	char palabra[100],palabra2[100];
	cout<<"Ingrese una palabra: "<<endl; cin.getline(palabra,100,'\n');
	cout<<"Ingrese otra palabra: "<<endl; cin.getline(palabra2,100,'\n');
	strupr(palabra);
	strupr(palabra2);
	if(strcmp(palabra,palabra2)==0){
		cout<<"Las palabras son las mismas"<<endl;
	}
	else{
		cout<<"Las palabras NO son las mismas"<<endl;
	}
	getch();
	return 0;
}
