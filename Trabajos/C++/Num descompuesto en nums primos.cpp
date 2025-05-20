#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num;
	cout<<"Ingrese un numero: "; cin>>num;
	cout<<"\nNumeros primos usados para la descomposicion: ";
		for(int i=2;num>1;i++){
			while(num%i==0){
				cout<<i<<" ";
				num /= i;
			}
		}
	getch();
	return 0;
}
