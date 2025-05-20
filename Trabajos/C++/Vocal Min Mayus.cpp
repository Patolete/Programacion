#include <iostream>

using namespace std;

int main(){
	char letra;
	cout<<"Escriba una letra: "; cin>>letra;
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':cout<<"\nLa letra es una vocal minuscula"<<endl; break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':cout<<"\nLa letra es una vocal mayuscula"<<endl; break;
		default:cout<<"\nLa letra no es una vocal"<<endl; break;
	}
	
	return 0;
}
