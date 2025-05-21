#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void leer();

int main() {
	leer();
    getch();
    return 0;
}

void leer(){
	string titulo, texto;
	ifstream archivo;
	cout<<"Nombre del archivo que desea abrir: "; getline(cin, titulo);
	archivo.open(titulo.c_str(),ios::in);
	if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo";
        return;
    }
    while (getline(archivo, texto)) {
        cout << texto << endl;
    }
	archivo.close();
}
