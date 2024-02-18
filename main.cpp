#include <iostream>
#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int numero;

    cout << "Ingresa un número positivo: ";
    cin >> numero;

    if (numero < 0)
        cout << "Error. El factorial de un número negativo no existe.";
    else
        cout << "El factorial de " << numero << " es: " << factorial(numero);

    return 0;
}