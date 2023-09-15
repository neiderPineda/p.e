#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> distances = {50, 55, 57, 58, 60};
    int t = 174;
    int maxSum = 0;
    vector<int> selectedCities;

    // Utilizamos tres bucles anidados para generar todas las combinaciones posibles de tres ciudades
    for (int i = 0; i < distances.size(); ++i) {
        for (int j = i + 1; j < distances.size(); ++j) {
            for (int k = j + 1; k < distances.size(); ++k) {
                int sum = distances[i] + distances[j] + distances[k];
                // Verificamos si la suma cumple con la restricción y si es mayor que la suma máxima actual
                if (sum <= t && sum > maxSum) {
                    maxSum = sum;
                    selectedCities = {distances[i], distances[j], distances[k]};
                }
            }
        }
    }
 
    // Imprimimos la solución
    cout << "Las ciudades seleccionadas son:";
    for (int i = 0; i < selectedCities.size(); ++i) {
        cout << " " << selectedCities[i];
    }
    cout << endl;
    cout << "La suma de las distancias es: " << maxSum << " millas." << endl;

    return 0;
}