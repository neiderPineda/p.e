#include <iostream>

using namespace std;

int main() {
    int n;
    double promedio, nota3;

    cout << "Ingrese la cantidad de notas que calificará: ";
    cin >> n;

    int x = 1;
    double suma = 0;

    while (x <= n) {
        cout << "Ingresa la nota " << x << ": ";
        double num;
        cin >> num;
        suma += num;
        x++;
    }

    promedio = suma / n;

    cout << "El promedio de " << n << " notas es: " << promedio << endl;

    nota3 = promedio * 0.2;

    cout << "Su equivalencia de notas es igual a: " << nota3 << endl;

    return 0;
}
