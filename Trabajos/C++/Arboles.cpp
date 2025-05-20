#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo* der;
    Nodo* izq;
};

Nodo* arbol = NULL;
int cont = 0;

Nodo* crearNodo(int x);
void insertaNodo(Nodo*&, int);
void mostrarArbol(Nodo*&, int);

int main() {
    int rspt;
     for (int i = 0; i < 5; i++) {
        cout << "Ingrese un numero: ";
        cin >> rspt;
        insertaNodo(arbol, rspt);
        mostrarArbol(arbol, cont);
    }


    getch();
    return 0;
}

Nodo* crearNodo(int x) {
    Nodo* nuevoNodo = new Nodo();

    nuevoNodo->dato = x;
    nuevoNodo->der = NULL;
    nuevoNodo->izq = NULL;

    return nuevoNodo;
}

void insertaNodo(Nodo*& arbol, int x) {
    if (arbol == NULL) {
        Nodo* nuevoNodo = crearNodo(x);
        arbol = nuevoNodo;
    } else {
        int valorRaiz = arbol->dato;
        if (x < valorRaiz) {
            insertaNodo(arbol->izq, x);
        } else {
            insertaNodo(arbol->der, x);
        }
    }
}

void mostrarArbol(Nodo*& arbol, int cont) {
    if (arbol == NULL) {
        return;
    } else {
        mostrarArbol(arbol->der, cont + 1);
        for (int i = 0; i < cont; i++) {
            cout << "   ";
        }
        cout << arbol->dato << endl;
        mostrarArbol(arbol->izq, cont + 1);
    }
}
