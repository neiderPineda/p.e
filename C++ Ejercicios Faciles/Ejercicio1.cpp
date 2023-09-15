#include <iostream>

using namespace std;

int main() {
    double centimetros, pulgadas;
    
    cout << "Ingrese la longitud en centímetros: ";
    cin >> centimetros;
    
    pulgadas = centimetros / 2.54;
    
    cout << centimetros << " centímetros son equivalentes a " << pulgadas << " pulgadas." << endl;
    
    return 0;
}
