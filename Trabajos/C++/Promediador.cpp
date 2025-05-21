#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

void insertarLista(Nodo*& lista, int x);
void recorrerLista(Nodo* lista, int& sum, int& cont);

int main() {
    Nodo* lista = NULL;
    int x, sum = 0, cont = 0;
    float promedio;
    char rspt;
    do {
        cout << "Quiere ingresar otro numero (s/n)? ";
        cin >> rspt;
        if ((rspt == 's') || (rspt == 'S')) {
            cout << "\nDigite un numero: ";
            cin >> x;
            insertarLista(lista, x);
        }
    } while ((rspt == 's') || (rspt == 'S'));
    recorrerLista(lista, sum, cont);
    promedio = static_cast<float>(sum) / cont;
    cout<<"Suma: "<<sum<<endl;
    cout << "Promedio: " << promedio << endl;
    getch();
    return 0;
}

void insertarLista(Nodo*& lista, int x) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = x;

    Nodo* aux1 = lista, * aux2 = NULL;

    while ((aux1 != NULL) && (aux1->dato < x)) {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (aux2 == NULL) {
        nuevoNodo->siguiente = lista;
        lista = nuevoNodo;
    } else {
        aux2->siguiente = nuevoNodo;
        nuevoNodo->siguiente = aux1;
    }
}

void recorrerLista(Nodo* lista, int& sum, int& cont) {
    Nodo* aux = lista;
    while (aux != NULL) {
        sum += aux->dato;
        cont++;
        aux = aux->siguiente;
	}
    }
