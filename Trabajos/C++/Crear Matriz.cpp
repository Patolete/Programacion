#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
	int filas=0,columnas=0,nuMax;
	cout<<"Cuantas filas queres que tenga la matriz: "; cin>>filas;
	cout<<"Cuantas columnas queres que tenga la matriz: "; cin>>columnas;
	int matriz [filas][columnas],matriz2[filas][columnas];
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			srand(time(NULL));
			nuMax = 1 + rand()%(100);
			matriz2[i][j] = matriz[i][j];
		}
	}
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
