#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

template <class MULTI>
MULTI maximo(MULTI x,MULTI y, MULTI z);

int main(){
	float num = 20.323, chau = 20.321, hola = 20.322;
	cout<<"El valor maximo es: "<<maximo(num, hola, chau)<<endl;
	getch();
	return 0;
}
template <class MULTI>
MULTI maximo(MULTI x,MULTI y, MULTI z){
	MULTI max = 0;
	if(x > y && x > z){
		max = x;
	}
	else if(y > x && y > z){
		max = y;
	}
	else{
		max = z;
	}
	return max;
}
