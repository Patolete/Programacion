#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

int cont;

int fibonacci(int n);

int main(){
	do{
		cout<<"Cantidad de veces a realizar la serie fibonacci: "; cin>>cont;
	}while(cont<=0);
	
	for(int i=0;i<cont;i++){
		cout<<fibonacci(i)<<" , ";
	}
	
	getch();
	return 0;
}
int fibonacci(int n){
	if(n<2){
		return n;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
