#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float cat1, cat2, hipo;
	cout<<"Digite el valor del 1er cateto de este triangulo rectangulo: "; cin>>cat1;
	cout<<"Digite el valor del 2do cateto de este triangulo rectangulo: "; cin>>cat2;
	
	cat1 = pow(cat1, 2);
	cat2 = pow(cat2, 2);
	
	hipo = cat1 + cat2;
	hipo = sqrt(hipo);
	
	cout<<"\nLa hipotenusa de este triangulo rectangulo es: "<<hipo<<endl;
	return 0;
}
