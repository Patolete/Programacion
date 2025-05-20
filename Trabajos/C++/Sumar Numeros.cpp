#include <iostream>

using namespace std;

int main (){
	float a, b, c, d, resultado = 0;
	cout<<"Digite el valor de A: "; cin>>a;
	cout<<"Digite el valor de B: "; cin>>b;
	cout<<"Digite el valor de C: "; cin>>c;
	cout<<"Digite el valor de D: "; cin>>d;
	
	resultado = (a+b)/(c+d);
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;	
	return 0;
}
