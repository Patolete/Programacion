#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

int main(){
	int nums[100], nElementos, *dirNums, min=9999, *dirMin;
	cout<<"Cuantos elementos tendra el array? "; cin>>nElementos;
	for(int i=0;i<nElementos;i++){
		cout<<"\n"<<i+1<<". Digite un numero: "; cin>>nums[i];
	}
	dirNums = nums;
	for(int j=0;j<nElementos;j++){
		if(*dirNums<min){
			min = *dirNums;
			dirMin = dirNums;
		}
		dirNums++;
	}
	cout<<"\nEl numero "<<min<<" en la pocision "<<dirMin<<" es el mas chico del arreglo"<<endl;
	getch();
	return 0;
}
