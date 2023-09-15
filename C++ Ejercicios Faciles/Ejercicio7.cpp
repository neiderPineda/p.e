#include <iostream>

using namespace std;

double elevarNumero(double numero, int potencia) {
    if (potencia < 0) {
        return 1.0 / elevarNumero(numero, -potencia);
    } else if (potencia == 0) {
        return 1.0;
    } else {
        double resultado = 1.0;
        for (int i = 0; i < potencia; i++) {
            resultado *= numero;
        }
        return resultado;
    }
}

int main() {
    double numero;
    int potencia;

    cout << "Ingrese un número: ";
    cin >> numero;

    cout << "Ingrese la potencia a la que desea elevarlo: ";
    cin >> potencia;

    double resultado = elevarNumero(numero, potencia);

    cout << numero << " elevado a la potencia " << potencia << " es igual a " << resultado << endl;

    return 0;
}
