#include <iostream>
using namespace std;

int main() {
    int j;
    cout << "Ingrese el limite hasta donde desea encontrar numeros primos: ";
    cin >> j;
    cout << "Numeros primos hasta " << j << " son:" << endl;

    int num = 2;
    while (num <= j) {
        if (num == 2) {
            cout << num << " ";
            num++;
            continue;
        }
        if (num % 2 == 0) {
            num++;
            continue; // Pares mayores que 2 no son primos
        }
        int i = 3;
        while (i * i <= num) {
            if (num % i == 0) {
                num++;
                break; // Encontró un divisor, no es primo
            }
            i += 2;
        }
        if (i * i > num) {
            cout << num << " "; // No se encontró divisor, es primo
        }
        num++;
    }
    cout << endl;
    return 0;
}