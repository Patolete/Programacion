#include <iostream>
#include <conio.h>

using namespace std;

class Tiempo {
private:
    int horas, minutos, segundos;

public:
    Tiempo(int _horas, int _minutos, int _segundos);
    Tiempo(long tiempo);
    void mostrarTiempo();
};

Tiempo::Tiempo(int _horas, int _minutos, int _segundos) {
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}

Tiempo::Tiempo(long tiempo) {
    horas = tiempo / 3600;
    tiempo %= 3600;
    minutos = tiempo / 60;
    segundos = tiempo % 60;
}

void Tiempo::mostrarTiempo() {
    cout << "Tiempo: " << horas << "hs " << minutos << "mins " << segundos << "s" << endl;
}

int main() {
    Tiempo x(10, 15, 12);
    Tiempo n(36912); // Convertir 36.912 segundos a segundos totales
    x.mostrarTiempo();
    n.mostrarTiempo();
    getch();
    return 0;
}
