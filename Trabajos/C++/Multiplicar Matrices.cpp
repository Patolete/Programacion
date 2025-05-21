#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int matriz[100][100], matriz2[100][100],multiplicacion[100][100],diagonal=0;
	cout<<"Digite el tamanio de la diagonal que tendra las matrices: "<<endl; cin>>diagonal;
	for(int i=0;i<diagonal;i++){
		for(int j=0;j<diagonal;j++){
			cout<<"Digite un numero(Matriz1)["<<i<<"]["<<j<<"]"<<endl; cin>>matriz[i][j];
			cout<<"Digite un numero(Matriz2)["<<i<<"]["<<i<<"]"<<endl; cin>>matriz2[i][j];
			multiplicacion[i][j] = matriz[i][j]*matriz2[i][j];
		}
	}
	
	cout<<"Producto de las dos matrices: "<<endl;
	for(int i=0;i<diagonal;i++){
		cout<<"/";
		for(int j=0;j<diagonal;j++){
			cout<<multiplicacion[i][j]<<" ";
		}
		cout<<"/"<<endl;
	}
	getch();
	return 0;
}
