#include <iostream>

using namespace std;

int main(){
	float n1, n2, n3, n4;
	cout<<"Digite 3 numeros: "; cin>>n1>>n2>>n3;
	cout<<"Digite el 4to numero: "; cin>>n4;
	if(n4 == n1){
		cout<<"\nEl primer numero es igual al cuarto numero"<<endl;
	}
	else if(n4 == n2){
		cout<<"\nEl segundo numero es igual al cuarto numero"<<endl;
	}
	else if(n4 == n3){
		cout<<"\nEl tercer numero es igual al cuarto numero"<<endl;
	}
	else{
		cout<<"\nEl cuarto numero no es parecido a ninguno de los anteriores numeros digitados"<<endl;
	}
	return 0;
}
