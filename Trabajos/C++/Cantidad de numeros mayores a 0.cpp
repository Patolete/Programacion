#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float num;
	int list;
	do{
		cout<<"Digite un numero: "<<endl; cin>>num;
		if(num > 0){
			list += 1;
		}
	}while((num < 0) || (num > 0));
	cout<<"Cantidad de numeros mayores a 0 digitados: "<<list<<endl;
	getch();
	return 0;
}
