#include <iostream>

int main() {
    int peso;
    double kg, gr;

    std::cout << "Digite la cantidad de libras a convertir: ";
    std::cin >> peso;

    kg = 0.453592 * peso;
    gr = 453.6 * peso;

    std::cout << "Su peso en kilogramos es: " << kg << std::endl;
    std::cout << "Su peso en gramos es: " << gr << std::endl;

    return 0;
}
