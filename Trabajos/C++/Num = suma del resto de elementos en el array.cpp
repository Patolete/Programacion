#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[5];
	int suma=0;
	int i=0;
	int mayor=0;
	while(i<5){
		cout<<i+1<<". Digite un numero: "; cin>>numeros[i];
		suma += numeros[i];
		if(numeros[i] >mayor){
			mayor = numeros[i];
		}
		i++;
	}
	if(suma-mayor == mayor){
		cout<<"\nNumero que es la suma del resto de elementos en el arreglo: "<<mayor<<endl;
	}
	getch();
	return 0;
}
