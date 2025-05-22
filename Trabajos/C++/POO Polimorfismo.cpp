#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Animal {
private:
    float tamanio;

public:
    Animal(float);
    virtual void comer();
};

class Perro : public Animal {
private:
    string raza;

public:
    Perro(float, string);
    void comer() override;
};

class Humano : public Animal {
private:
    string nombre;

public:
    Humano(float, string);
    void comer() override;
};

Animal::Animal(float _tamanio) {
    tamanio = _tamanio;
}

Perro::Perro(float _tamanio, string _raza) : Animal(_tamanio) {
    raza = _raza;
}

Humano::Humano(float _tamanio, string _nombre) : Animal(_tamanio) {
    nombre = _nombre;
}

void Animal::comer() {
    cout << "Introduce la comida en su boca." << endl;
    cout << "Mastica." << endl;
    cout << "Traga." << endl;
}

void Perro::comer() {
    cout << "\nEsperar a que le sirvan la comida." << endl;
    Animal::comer();
}

void Humano::comer() {
    cout << "\nCocinar la comida." << endl;
    cout << "Preparar la mesa." << endl;
    cout << "Servir la comida." << endl;
    Animal::comer();
}

int main() {
    Animal *vector[3];
    vector[0] = new Animal(2.0);
    vector[1] = new Perro(2.0, "Pitbull");
    vector[2] = new Humano(2.0, "Patricio");

    vector[0]->comer();
    vector[1]->comer();
    vector[2]->comer();

    getch();
    return 0;
}

