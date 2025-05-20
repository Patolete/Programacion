#include <iostream>

using namespace std;

int main(){
	float num1,num2,num3;
	cout<<"Digite 3 numeros: ";
	cin>>num1>>num2>>num3;
	if(num1 > num2 && num3 < num1){
		cout<<"\nEl número mayor es: "<<num1<<endl;
	}
	else if(num2 > num1 && num2 > num3){
		cout<<"\nEl número mayor es: "<<num2<<endl;
	}
	else{
		cout<<"\nEl numero mayor es: "<<num3<<endl;
	}
	return 0;
}
