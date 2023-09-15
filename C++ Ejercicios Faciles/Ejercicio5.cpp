#include <iostream>

using namespace std;

unsigned long long calcularFactorial(int numero) {
    if (numero < 0) {
        return 0;
    }
    
    unsigned long long factorial = 1;
    
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    
    return factorial;
}

int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    unsigned long long factorial = calcularFactorial(numero);

    cout << "El factorial de " << numero << " es " << factorial << endl;

    return 0;
}
