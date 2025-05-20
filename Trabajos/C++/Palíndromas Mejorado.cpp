#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main() {
	/*std::cin.tie(nullptr);
  	std::ios_base::sync_with_stdio(false);*/
	char palabra[100], palabra2[100], aux,j=0;
	int cont=0,i=0,fin=0,cont2=0;
	cout<<"";
	cin>>cont;
	cout<<""<<endl;
	cin.getline(palabra,100);
	do{
		cout<<""<<endl;
		cin.getline(palabra,100);
		strcpy(palabra2,palabra);
		cont2=strlen(palabra2)-1;
    while(cont2>0){
      aux=palabra2[j];
      palabra2[j]= palabra2[cont2];
      palabra2[cont2]=aux;
      cont2--;
      j++;
    }
    	j=0;
		if(strcmp(palabra,palabra2)==0){
			cout<<"P";
		}
		else{
			cout<<"NP";
		}
		i++;
	}while(i<cont);
	return 0;
}
