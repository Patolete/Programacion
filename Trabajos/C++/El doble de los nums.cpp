#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[5];
	int multiplicacion[5];
	for(int i=0;i<5;i++){
		cout<<i+1<<". Digite un numero: "; cin>>numeros[i];
		multiplicacion[i] = numeros[i]*2;
	}
	cout<<"\lMultiplicacion por 26 de los numeros anteriores: "<<endl;
	for(int i=0;i<5;i++){
		cout<<numeros[i]<<" -> "<<multiplicacion[i]<<endl;
	}
	getch();
	return 0;
}
