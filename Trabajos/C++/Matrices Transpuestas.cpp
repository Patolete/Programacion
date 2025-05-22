#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto
#include <stdlib.h>//arreglos dinamicos y demas

using namespace std;

void datos();
void imprimir(int **, int, int);

int **matriz, nfilas, ncol;

int main(){
	datos();
	imprimir(matriz, nfilas, ncol);
	for(int i=0;i<nfilas;i++){
		delete[] matriz[i];
	}
	delete[] matriz;
	getch();
	return 0;
}

void datos(){
	cout<<"Digite la cantidad de filas: "; cin>>nfilas;
	matriz = new int*[nfilas];
	cout<<"Digite la cantidad de columnas: "; cin>>ncol;
	for(int i=0;i<nfilas;i++){
		matriz[i] = new int[ncol];
	}
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<nfilas;j++){
			cout<<"\nDigite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(matriz+i)+j);
		}
	}
}

void imprimir(int **matriz, int nfilas, int ncol){
	cout<<"\n\nImprimiendo Matriz Original:\n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<*(*(matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n\nImprimiendo Matriz Transpuesta:\n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<*(*(matriz+j)+i)<<" ";
		}
		cout<<"\n";
	}
}
