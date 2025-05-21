#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribirFrases();

int main() {
	escribirFrases();
    getch();
    return 0;
}

void escribirFrases() {
    ofstream archivo;
    string nombre, frases, rspt;
    cout << "Nombre del archivo: ";
    getline(cin, nombre);
    archivo.open(nombre.c_str(), ios::out);

    if (archivo.fail()) {
        cout << "\t-No se puede crear/editar el archivo-";
        exit(1);
    }

    do {
        cout << "Una frase para el archivo: ";
        getline(cin, frases);
        archivo << frases << endl;  // Se mueve dentro del bucle
        cout << "Desea agregar otra frase(s/n)? ";
        getline(cin, rspt);
    } while ((rspt == "s") || (rspt == "S"));

    archivo.close();
}

