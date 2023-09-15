#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int main() {
    vector<bool> ovejas;

    cout << "Ingrese el número de ovejas: ";
    int numOvejas;
    cin >> numOvejas;

    cout << "Ingrese cuántas de estas ovejas están presentes: ";
    int numPresentes;
    cin >> numPresentes;

    if (numPresentes > numOvejas) {
        cout << "El número de ovejas presentes no puede ser mayor que el número total de ovejas." << endl;
        return 1;
    }

    for (int i = 0; i < numPresentes; i++) {
        ovejas.push_back(true);
    }

    for (int i = numPresentes; i < numOvejas; i++) {
        ovejas.push_back(false);
    }

    random_device rd;
    mt19937 g(rd());
    shuffle(ovejas.begin(), ovejas.end(), g);

    cout << "Se detectaron " << numPresentes << " ovejas presentes: (";
    for (int i = 0; i < numOvejas; i++) {
        cout << (ovejas[i] ? "true" : "false");
        if (i < numOvejas - 1) {
            cout << ", ";
        }
    }
    cout << ")" << endl;

    return 0;
}
