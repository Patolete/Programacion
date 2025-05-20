#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int elec, num;
	cout<<"Digite un numero: "<<endl; cin>>num;
	cout<<"1. Cubo del numero"<<endl;
	cout<<"2. Par o impar?"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Elija una opcion: "<<endl; cin>>elec;
	switch(elec){
		case 1:cout<<"\nEl cubo del numero "<<num<<" es "<<pow(num,3)<<endl; break; 
		case 2:if((num%2) == 0){
			cout<<"\nEl numero "<<num<<" es par"<<endl;
		}
		else{
			cout<<"\nEl numero "<<num<<" es impar"<<endl;
		}
		break;
		case 3:break;
	}
	return 0;
}
