#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float t, promedio, tmax, tmin;
	for(int i = 1; i <= 6; i ++){
		cout<<"Digite la temperatura actual: "<<endl; cin>>t;
		if(t > tmax){
			tmax = t;
		}
		if(t < tmin){
			tmin = t;
		}
		promedio += t;
	}
	promedio /= 6;
	cout<<"Temperatura maxima: "<<tmax<<endl;
	cout<<"Temperatura minima: "<<tmin<<endl;
	cout<<"Temperatura promedio: "<<promedio<<endl;
	getch();
	return 0;
}
