#include <iostream>//Libreria principal
#include <conio.h>//Libreria que uso para que no se cierre el programa solo
#include <string.h>//Libreria para cadenas de texto
#include <stdlib.h>//arreglos dinamicos y demas

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void mostrarPila(Nodo *);

int main(){
	Nodo *pila = NULL;
	int rst, dato;
	cout<<"OPCIONES\n";
	cout<<"1. Agregar elemento a la pila.";
	cout<<"\n2. Mostrar elementos de la pila.";
	cout<<"\n3. Salir.";
	do{
		cout<<"\n\nCual opcion quiere realizar? "; cin>>rst;
		if(rst == 1){
			cout<<"\nDigite un numero: "; cin>>dato;
			agregarPila(pila, dato);
		}
		if(rst == 2){
    		if(pila != NULL){
        		cout<<"\n\nLos elementos de la pila son: \n";
        		mostrarPila(pila);
    		}
    		else{
        		cout<<"\nLa pila esta vacia.";
    		}
		}
	}while(rst != 3);
	
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato = n;
	nuevoNodo->siguiente = pila;
	pila = nuevoNodo;
}

void mostrarPila(Nodo *pila){
    Nodo *aux = pila;
    while (aux != NULL){
        cout << aux->dato << " , ";
        aux = aux->siguiente;
    }
    cout << endl;
}
