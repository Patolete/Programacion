#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    Persona(string, int);
    void mostrarPersona();
};

class Alumno : public Persona {
private:
    string codigodeAlumno;
    float notaFinal;

public:
    Alumno(string, int, string, float);
    void mostrarAlumno();
};

class Empleado : public Persona {
private:
    string trabajo;
    long sueldoNeto;

public:
    Empleado(string, int, string, long);
    void mostrarEmpleado();
};

class Universitario : public Alumno {
private:
    string facultad;
    int anioCursando;

public:
    Universitario(string, int, string, float, string, int);
    void mostrarUniversitario();
};

// Implementación de las clases

Persona::Persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrarPersona() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout<<"\n"<<endl;
}

Alumno::Alumno(string _nombre, int _edad, string _codigodeAlumno, float _notaFinal)
    : Persona(_nombre, _edad) {
    codigodeAlumno = _codigodeAlumno;
    notaFinal = _notaFinal;
}

void Alumno::mostrarAlumno() {
    mostrarPersona();
    cout << "Codigo de Alumno: " << codigodeAlumno << endl;
    cout << "Nota Final: " << notaFinal << endl;
    cout<<"\n"<<endl;
}

Empleado::Empleado(string _nombre, int _edad, string _trabajo, long _sueldoNeto)
    : Persona(_nombre, _edad) {
    trabajo = _trabajo;
    sueldoNeto = _sueldoNeto;
}

void Empleado::mostrarEmpleado() {
    mostrarPersona();
    cout << "Trabajo: " << trabajo << endl;
    cout << "Sueldo: " << sueldoNeto << endl;
    cout<<"\n"<<endl;
}

Universitario::Universitario(string _nombre, int _edad, string _codigodeAlumno, float _notaFinal, string _facultad, int _anioCursando) : Alumno(_nombre, _edad, _codigodeAlumno, _notaFinal) {
    facultad = _facultad;
    anioCursando = _anioCursando;
}

void Universitario::mostrarUniversitario() {
    mostrarAlumno();
    cout << "Facultad: " << facultad << endl;
    cout << "Anio Cursando: " << anioCursando << endl;
    cout<<"\n"<<endl;
}

int main() {
    Persona p1("Alguien", 29);
    p1.mostrarPersona();

    Alumno a1("Alguien", 29, "0200200020", 9.18);
    a1.mostrarAlumno();

    Universitario u1("Alguien", 29, "0200200020", 9.18, "Ingenieria Termonuclear", 6);
    u1.mostrarUniversitario();

    Empleado e1("Alguien", 29, "Oficinista", 260000);
    e1.mostrarEmpleado();

    return 0;
}
