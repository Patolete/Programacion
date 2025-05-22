#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

int vec[100], tam=0;

void vecOriginal();
void impares(int vec[], int);

int main(){
	vecOriginal();
	impares(vec, tam);
	getch();
	return 0;
}
void vecOriginal(){
	cout<<"Cual sera la longitud de su arreglo? "; cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<"\n"<<i+1<<". Digite un numero: "; cin>>vec[i];
	}
}
void impares(int vec[], int tam){
	int imp[100], cont=0;
	int j=0;
	for(int i=0;i<tam;i++){
		if(vec[i]%2 != 0){
			imp[j] = vec[i];
			cont++;
			j++;
		}
	}
	cout<<"\nNumeros impares del arreglo: "<<endl;
	for(int j=0;j<cont;j++){
		cout<<imp[j]<<" ";
	}
}
