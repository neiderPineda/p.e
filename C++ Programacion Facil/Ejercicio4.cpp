#include <iostream>

using namespace std;

int main() {
    double numero1, numero2;
    char operacion;
    double resultado;

    cout << "Ingrese el primer número: ";
    cin >> numero1;

    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    cout << "Elija una operación ( + para suma, - para resta, * para multiplicación, / para división): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                cout << "Error: División por cero." << endl;
                return 1; // Salir con código de error
            }
            break;
        default:
            cout << "Operación no válida." << endl;
            return 1; // Salir con código de error
    }

    cout << "El resultado de la operación es: " << resultado << endl;

    return 0;
}
