#include <iostream>
#include <string>

using namespace std;

int main() {
    double notaf, previo1, previo2, ternota, previof, nota1, nota2, nota3, nota4;
    string asig;

    cout << "Ingrese la asignatura a la cual desea sacar nota definitiva: ";
    cin >> asig;

    cout << "Ingrese la nota del primer previo: ";
    cin >> previo1;

    cout << "Ingrese la nota del segundo previo: ";
    cin >> previo2;

    cout << "Ingrese la nota de tercera nota: ";
    cin >> ternota;

    cout << "Ingrese la nota del previo final: ";
    cin >> previof;

    nota1 = previo1 * 0.25;
    nota2 = previo2 * 0.25;
    nota3 = ternota * 0.20;
    nota4 = previof * 0.3;

    notaf = nota1 + nota2 + nota3 + nota4;

    cout << "Su nota definitiva en la asignatura " << asig << " es: " << notaf << endl;

    return 0;
}
