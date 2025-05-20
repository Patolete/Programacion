#include<iostream>
#include<vector>

using namespace std;
//Prueba con vectores
int filtrarNum(vector<int>num){
	int cantNum, prim, ult;
	cout<<"Cuantos numeros quiere escribir: "; cin>>cantNum;
	num.size(cantNum);
	for(int i; i <= cantNum ; i++){
		cout<<"Ingrese un numero: "; cin>>num;
		prim = num/10;
		
		prim /= 10;
		if()
	}
}
//Solocion con variable
/*int main(){
	int num, prim, ult, cont=0;
	cout<<"Digite un numero: "<<endl; cin>>num;
	cout<<"De cuantas cifras es tu numero? "; cin>>cont;
	prim = num/10;
	cont -= 1;
	do{
		cont --;
		prim /= 10;
	}while(cont != 1);
	ult = num%10;
	if(prim == ult){
		cout<<"La primera y ultima cifra del numero son iguales";
	}
	else{
		cout<<"La primera y ultima cifra del numero son diferentes";
	}
	return 0;
}
