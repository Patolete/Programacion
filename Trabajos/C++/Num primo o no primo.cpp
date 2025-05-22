#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

int main(){
	int num, *dirNum;
	cout<<"Digite un numero: "; cin>>num;
	dirNum = &num;
	if(num%2 == 1){
		cout<<"\nEl numero "<<num<<" que esta en la pocision "<<dirNum<<" es primo"<<endl;
	}
	else{
		cout<<"\nEl numero "<<num<<" que esta en la pocision "<<dirNum<<" NO es primo"<<endl;
	}
	getch();
	return 0;
}
