#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto
#include <stdlib.h>//arreglos dinamicos y demas

using namespace std;

int *num,caNum;

void datos();
void buscarNum(int *,int);

int main(){
	datos();
	buscarNum(num,caNum);
	
	delete[] num;
	getch();
	return 0;
}

void datos(){
	cout<<"Digite la longitud del arreglo: "; cin>>caNum;
	num = new int[caNum];
	for(int i=0;i<caNum;i++){
		cout<<"\nDigite un numero: "; cin>>*(num+i);
	}
}

void buscarNum(int *num, int caNum){
	int dato, i =0;
	bool band = false;
	cout<<"\nDigite el numero que quiere buscar: "; cin>>dato;
	while((band == false) && (i<caNum)){
		if(*(num+i) == dato){
			band = true;
		}
		i++;
	}
	if(band==false){
		cout<<"El numero "<<dato<<" NO ha sido encontrado"<<endl;
	}
	else{
		cout<<"El numero "<<dato<<" ha sido encontrado en la posicion "<<i-1<<endl;
	}
}
