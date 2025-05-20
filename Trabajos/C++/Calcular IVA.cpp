#include <iostream>

using namespace std;

int main(){
	float precio, resultado;
	cout<<"Digite el precio de su producto: "; cin>>precio;
	resultado = precio * 1.21;
	cout<<"\nEl precio con IVA es: "<<resultado<<endl;
	return 0;
}
