#include <iostream>

using namespace std;

int main() {
    int numHijos, edadHijo, estadoCivilMadre;
    double montoMensual = 0.0;

    cout << "Ingrese el número de hijos en la familia: ";
    cin >> numHijos;

    if (numHijos <= 2) {
        montoMensual += 70.0;
    } else if (numHijos <= 5) {
        montoMensual += 90.0;
    } else {
        montoMensual += 120.0;
    }

    for (int i = 1; i <= numHijos; i++) {
        cout << "Ingrese la edad del hijo " << i << ": ";
        cin >> edadHijo;
        if (edadHijo >= 6 && edadHijo <= 18) {
            montoMensual += 10.0;
        }
    }

    cout << "¿La madre de familia es viuda? (1 para sí, 0 para no): ";
    cin >> estadoCivilMadre;
    if (estadoCivilMadre == 1) {
        montoMensual += 20.0;
    }

    cout << "El monto mensual que recibirá la familia es: S/. " << montoMensual << endl;

    return 0;
}
