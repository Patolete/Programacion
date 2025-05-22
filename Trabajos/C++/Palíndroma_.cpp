#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

int main(){
	char palindroma[100], palabra[100];
	cout<<"Ingrese una palabra: "; cin.getline(palabra,100,'\n');
	strcpy(palindroma,palabra);
	strrev(palabra);
	if(strcmp(palabra,palindroma)==0){
		cout<<palindroma<<" es palindroma";
	}
	else{
		cout<<palindroma<<" no es palindroma";
	}
	getch();
	return 0;
}
