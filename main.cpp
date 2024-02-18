#include <iostream>
using namespace std;

int main() {
    int numero;
    int a = 1;

    // Tabla del 4
    cout << "Tabla del 4:" << endl;
    numero = 4;
    do {
        int multiplicacion = numero * a;
        cout << numero << " x " << a << " = " << multiplicacion << endl;
        a++;
    } while (a <= 10);

    // Tabla del 6
    cout << "\nTabla del 6:" << endl;
    numero = 6;
    a = 1;
    do {
        int multiplicacion = numero * a;
        cout << numero << " x " << a << " = " << multiplicacion << endl;
        a++;
    } while (a <= 10);

    
    return 0;
}
