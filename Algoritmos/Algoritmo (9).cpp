#include <iostream>
#include <string>

using namespace std;

int main() {
    string temp;
    double num_temp, cel, fah, kel;

    cout << "Ingrese la escala de la temperatura (Celsius, Kelvin, Fahrenheit): ";
    cin >> temp;

    cout << "Ingrese el número de temperatura a calcular: ";
    cin >> num_temp;

    if (temp == "Celsius") {
        fah = (num_temp * 9 / 5) + 32;
        kel = num_temp + 273.15;
        cout << "Su escala Celsius y cantidad ingresada en Kelvin es: " << kel << endl;
        cout << "Su escala Celsius y cantidad ingresada en Fahrenheit es: " << fah << endl;
    } else if (temp == "Kelvin") {
        cel = num_temp - 273.15;
        fah = (num_temp - 273.15) * 9 / 5 + 32;
        cout << "Su escala Kelvin y cantidad ingresada en Celsius es: " << cel << endl;
        cout << "Su escala Kelvin y cantidad ingresada en Fahrenheit es: " << fah << endl;
    } else if (temp == "Fahrenheit") {
        kel = (num_temp - 32) * 5 / 9 + 273.15;
        cel = (num_temp - 32) * 5 / 9;
        cout << "Su escala Fahrenheit y cantidad ingresada en Kelvin es: " << kel << endl;
        cout << "Su escala Fahrenheit y cantidad ingresada en Celsius es: " << cel << endl;
    } else {
        cout << "Escala de temperatura no válida" << endl;
    }

    return 0;
}
