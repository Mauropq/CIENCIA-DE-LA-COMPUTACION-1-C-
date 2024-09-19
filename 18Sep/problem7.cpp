#include <iostream>

// Función para verificar si un número es primo
bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Función para encontrar el primer número primo mayor que un número dado
int encontrarPrimoMayor(int n) {
    int primo = n + 1;
    while (!esPrimo(primo)) {
        primo++;
    }
    return primo;
}

int main() {
    int numero = 10001;
    int primoMayor = encontrarPrimoMayor(numero);
    std::cout << "El primer número primo mayor que " << numero << " es " << primoMayor << std::endl;
    return 0;
}