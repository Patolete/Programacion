#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

int main(){
	char palabra[100], palabra2[100];
	cout<<"Escriba la primer palabra: "<<endl; cin.getline(palabra,100,'\n');
	cout<<"Escriba la segunda palabra: "<<endl; cin.getline(palabra2,100,'\n');
	if(strcmp(palabra,palabra2)==0){
		cout<<"Ambas palabras son iguales"<<endl;
	}
	else if(strcmp(palabra,palabra2)>0){
		cout<<palabra<<" esta despues alfabeticamente"<<endl;
	}
	else{
		cout<<palabra2<<" esta despues alfabeticamente"<<endl;
	}
	getch();
	return 0;
}
