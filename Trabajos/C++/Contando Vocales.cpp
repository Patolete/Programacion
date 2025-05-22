#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto
#include <stdlib.h>//arreglos dinamicos y demas

using namespace std;

char word[30];

void datos();
void contarVocales(char *);

int main(){
	datos();
	contarVocales(word);
	
	getch();
	return 0;
}

void datos(){
	cout<<"Ingrese una palabra: "; cin.getline(word, 30,'\n');
	strupr(word);
}

void contarVocales(char *word1){
	int contA=0,contE=0,contI=0,contO=0,contU=0;
	
	while(*word1){ //mientras nombre sea diferente de nulo '\0'
		switch(*word1){
			case 'A': contA++;break;
			case 'E': contE++;break;
			case 'I': contI++;break;
			case 'O': contO++;break;
			case 'U': contU++;break;
		}
		word1++;
	}
	
	cout<<"\nNumero de vocales A: "<<contA<<endl;
	cout<<"Numero de vocales E: "<<contE<<endl;
	cout<<"Numero de vocales I: "<<contI<<endl;
	cout<<"Numero de vocales O: "<<contO<<endl;
	cout<<"Numero de vocales U: "<<contU<<endl;

}
