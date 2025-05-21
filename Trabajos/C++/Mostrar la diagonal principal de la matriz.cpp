#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	//Declarando y guardando la matriz
	int numeros[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "<<endl; cin>>numeros[i][j];
		}
	}
	//Mostrando la diagonal principal de la matriz
	for(int i=0;i<3;i++){
		cout<<numeros[i][i]<<"\n";
	}
	getch();
	return 0;
}
