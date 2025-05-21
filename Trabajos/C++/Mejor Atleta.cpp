#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto

using namespace std;

struct ateleta{
	char nombre[20];
	char pais [20];
	int medallas;
}atletas[1000];

int main(){
	
	int canAtletas=0,max=0,posM=0;
	cout<<"Cantidad de atletas: "<<endl; cin>>canAtletas;
	
	for(int i=0;i<canAtletas;i++){
		fflush(stdin);
		cout<<i+1<<". Nombre del ateleta: "<<endl; cin.getline(atletas[i].nombre,20,'\n');
		cout<<i+1<<". Pais del ateleta: "<<endl; cin.getline(atletas[i].pais,20,'\n');
		cout<<i+1<<". Medallas del ateleta: "<<endl; cin>>atletas[i].medallas;
		
		if(atletas[i].medallas > max){
			atletas[i].medallas = max;
			posM = i;
		}
		cout<<"\n";
	}
	
	cout<<"\nAtleta con mas medallas: "<<endl;
	cout<<"\nNombre: "<<atletas[posM].nombre;
	cout<<"\nPais: "<<atletas[posM].pais;
	
	getch();
	return 0;
}
