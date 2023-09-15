#include <iostream>

using namespace std;

int main() {
    int tiempoAtleta1Minutos, tiempoAtleta1Segundos;
    int tiempoAtleta2Minutos, tiempoAtleta2Segundos;

    cout << "Ingrese el tiempo del primer atleta en minutos: ";
    cin >> tiempoAtleta1Minutos;
    cout << "Ingrese el tiempo del primer atleta en segundos: ";
    cin >> tiempoAtleta1Segundos;

    cout << "Ingrese el tiempo del segundo atleta en minutos: ";
    cin >> tiempoAtleta2Minutos;
    cout << "Ingrese el tiempo del segundo atleta en segundos: ";
    cin >> tiempoAtleta2Segundos;

    int tiempoTotalSegundos = tiempoAtleta1Minutos * 60 + tiempoAtleta1Segundos +
                              tiempoAtleta2Minutos * 60 + tiempoAtleta2Segundos;

    int horas = tiempoTotalSegundos / 3600;
    int minutos = (tiempoTotalSegundos % 3600) / 60;
    int segundos = tiempoTotalSegundos % 60;

    cout << "Tiempo total: " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos." << endl;

    return 0;
}
