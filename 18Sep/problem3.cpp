#include <iostream>


bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


int encontrarFactorPrimoMayor(int n) {
    int factor = 2;
    while (factor * factor <= n) {
        if (n % factor == 0 && esPrimo(factor)) {
            return factor;
        }
        factor++;
    }
    return -1; 
}

int main() {
    long long numero = 600851475143;
    long long factorPrimoMayor = encontrarFactorPrimoMayor(numero);
    if (factorPrimoMayor != -1) {
        std::cout << "El factor primo más grande de " << numero << " es " << factorPrimoMayor << std::endl;
    } else {
        std::cout << "No se encontró un factor primo" << std::endl;
    }
    return 0;
}
