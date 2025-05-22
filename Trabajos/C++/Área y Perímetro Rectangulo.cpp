#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

class Rectangulo {
private:
    int ancho;
    int largo;

public:
    Rectangulo(int, int);
    float perimetro();
    float area();
};

float perimetroResult, areaResult;

Rectangulo::Rectangulo(int _ancho, int _largo) {
    ancho = _ancho;
    largo = _largo;
}

float Rectangulo::perimetro() {
    perimetroResult = (ancho * 2) + (largo * 2);
    return perimetroResult;
}

float Rectangulo::area() {
    areaResult = ancho * largo;
    return areaResult;
}

int main() {
    int alt, anc;
    cout << "Altura y anchura del rectangulo: ";
    cin >> alt >> anc;
    Rectangulo r1(anc, alt);
    cout << "\nPerimetro del rectangulo: " << r1.perimetro();
    cout << "\nArea del rectangulo: " << r1.area();
    getch();
	return 0;
}
