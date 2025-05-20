#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int impares=0,pares=0,n,suma=0;
	cout<<"Digite un numero: "<<endl; cin>>n;
	for(int i=1; i <= n; i++){
		if(i%2 == 0){
			pares += i * -1;
		}
		else{
			impares += i;
		}
	}
	suma = pares + impares;
	cout<<"La suma es: "<<suma<<endl;
	getch();
	return 0;
}
