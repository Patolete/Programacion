#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

void cambio(int,int&,int&,int&,int&,int&,int&);

int main(){
	int num,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
	float centavos=0;
	cout<<"Ingrese una cantidad de dolares"<<endl; cin>>num;
	cambio(num,cien,cincuenta,veinte,diez,cinco,uno);
	cout<<"\nEl cambio es:"<<endl<<endl;
	cout<<"Cienes: "<<cien<<endl;
	cout<<"Cincuentas: "<<cincuenta<<endl;
	cout<<"Veintes: "<<veinte<<endl;
	cout<<"Dieces: "<<diez<<endl;
	cout<<"Cincos: "<<cinco<<endl;
	cout<<"Unos: "<<uno<<endl;
	getch();
	return 0;
}

void cambio(int num,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
	cien = num/100;
	num %= 100;
	cincuenta = num/50;
	num %= 50;
	veinte = num/20;
	num %= 20;
	diez = num/10;
	num %= 10;
	cinco = num/5;
	num %= 5;
	uno = num/1;
	num %= 1;
}
