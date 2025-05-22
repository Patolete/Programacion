#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

int m[100][100];
int nfilas=0,fila=0,ncol=0;

void matriz();
int menor(int,int m[][100],int,int);

int main(){
	matriz();
	cout<<"Elemento mas chico de la fila: "<<menor(fila,m,nfilas,ncol);
	cout<<"\nMatriz original: "<<endl;
	for(int i=0;i<nfilas;i++){
		cout<<"/";
		for(int j=0;j<ncol;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"/";
		cout<<"\n";
	}
	getch();
	return 0;
}
void matriz(){
	cout<<"Cantidad de filas en la matriz: "; cin>>nfilas;
	cout<<"\nCantidad de columnas en la matriz: "; cin>>ncol;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"\nDigite un numero ["<<i<<"]["<<j<<"]: "; cin>>m[i][j];
		}
	}
}
int menor(int fila,int m[][100],int nfilas,int ncol){
	cout<<"\nDegite un numero de fila a revisar: "; cin>>fila;
	int min=100000;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			if(i==fila-1){
				if(m[i][j]<min){
					min=m[i][j];
				}
			}
		}
	}
	return min;
}
