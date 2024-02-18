#include <iostream>
using namespace std;
int main() {
    int numero = 6;
    int r = 1;
    cout << "tabla de multiplicar del " << numero <<  " : " << endl;
    do  {
        int multiplicacion = numero * r;
        cout << numero << " x " << r << " = " << multiplicacion << endl;
        r++;
        } while ( r <= 10 );


    return 0;
}
