#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingresa un número: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "\nEl número es par" << endl;
    } else {
        cout << "\nEl número es impar" << endl;
    }

    return 0;
}
