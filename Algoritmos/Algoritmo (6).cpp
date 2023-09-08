#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Digite un numero para determinar hasta donde llegara el listado: "
	cin >> n;

for (int x=1; x <= n; ++x) {
	cout << x << endl;
}

	return 0;
}
