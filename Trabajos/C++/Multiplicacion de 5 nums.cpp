#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int multiplicacion = 1;
	int numeros[5] = {1,2,3,4,5};
	for(int i=0;i<5;i++){
		multiplicacion *= numeros[i];
	}
	cout<<"Multiplicacion de esos 5 numeros: "<<multiplicacion<<endl;	
	getch();
	return 0;
}
