#include <iostream>

using namespace std;

int main() {
    double cantidadPies, cantidadMetros;

    cout << "Ingrese la cantidad en pies: ";
    cin >> cantidadPies;

    cout << "Ingrese la cantidad en metros: ";
    cin >> cantidadMetros;

    double pulgadas = cantidadPies * 12;
    double yardas = cantidadPies / 3;
    double metrosTotal = cantidadPies * 0.3048 + cantidadMetros;
    double millas = metrosTotal / 1609;

    cout << "Suma convertida a pulgadas: " << pulgadas << " pulgadas." << endl;
    cout << "Suma convertida a yardas: " << yardas << " yardas." << endl;
    cout << "Suma convertida a metros: " << metrosTotal << " metros." << endl;
    cout << "Suma convertida a millas: " << millas << " millas." << endl;

    return 0;
}
