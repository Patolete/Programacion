#include <iostream>

using namespace std;

int main(){
	float num;
	cout<<"Digite un numero: "; cin>>num;
	if(num < 0){
		cout<<"\nEl numero es negativo"<<endl;
	}
	else if(num == 0){
		cout<<"\nEl numero es 0"<<endl;
	}
	else{
		cout<<"\nEl numero es positivo"<<endl;
	}
	return 0;
}
