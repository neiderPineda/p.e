#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    
    if (numero <= 3) {
        return true;
    }
    
    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }
    
    int limite = sqrt(numero);
    for (int i = 5; i <= limite; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << numero << " es un número primo." << endl;
    } else {
        cout << numero << " no es un número primo." << endl;
    }

    return 0;
}
