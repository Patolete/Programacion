#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[3][3], numeros2[3][3];
	cout<<"Matriz N1"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "<<endl; cin>>numeros[i][j];
		}
	}
	cout<<"Matriz N2"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "<<endl; cin>>numeros2[i][j];
		}
	}
	cout<<"\nSuma de las dos matrices: "<<endl;
	for(int i=0;i<3;i++){
		cout<<"/";
		for(int j=0;j<3;j++){
			cout<<numeros[i][j] + numeros2[i][j]<<" ";
		}
		cout<<"/";
		cout<<"\n";
	}
	getch();
	return 0;
}
