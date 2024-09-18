#include <iostream>
using namespace std;

int main() {
    int j;
    cout << "Ingrese el limite hasta donde desea encontrar numeros primos: ";
    cin >> j;
    cout << "Numeros primos hasta " << j << " son:" << endl;

    for (int num = 2; num <= j; num++) {
        if (num == 2) {
            cout << num << " ";  
            continue;
        }
        if (num % 2 == 0) {
            continue; // Pares mayores que 2 no son primos
        }
        int i;
        for (i = 3; i * i <= num; i += 2) {
            if (num % i == 0) {
                break; // Encontró un divisor, no es primo
            }
        }
        if (i * i > num) {
            cout << num << " "; // No se encontró divisor, es primo
        }
    }
    cout << endl;
    return 0;
}
