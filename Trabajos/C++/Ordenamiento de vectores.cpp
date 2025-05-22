#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

int vec[100], tam;

void nums();
void ordenamiento(int vec[],int);

int main(){
	nums();
	ordenamiento(vec,tam);
	
	getch();
	return 0;
}
void nums(){
	cout<<"Longitud del vector: "; cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<"\n"<<i+1<<". Digite un numero: "; cin>>vec[i];
	}
}
void ordenamiento(int vec[], int tam){
	char orden = 'F';
	int i = 0;
	while((orden == 'F') && (i<tam-1)){
		if(vec[i]>vec[i+1]){
			orden = 'V';
		}
		i++;
	}
	if(orden == 'F'){
		cout<<"\nEl vector esta ordenado de manera creciente"<<endl;
	}
	else{
		cout<<"\nEl vector NO esta ordenado de manera creciente"<<endl;
	}
}
