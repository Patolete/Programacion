#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char palabra[100], palabra2[100];
	int cont=0,i=0,fin=0;
	cout<<"";
	cin>>cont;
	cout<<""<<endl;
	cin.getline(palabra,100);
	do{
		cout<<""<<endl;
		cin.getline(palabra,100);
		strcpy(palabra2,palabra);
		strrev(palabra2);
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
