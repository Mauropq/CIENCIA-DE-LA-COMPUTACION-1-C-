#include <iostream>

// Función para verificar si un número es palíndromo
bool esPalindromo(int n) {
    int temp = n;
    int reverso = 0;
    while (temp != 0) {
        int digito = temp % 10;
        reverso = reverso * 10 + digito;
        temp /= 10;
    }
    return n == reverso;
}

// Función para encontrar el palíndromo más grande formado por el producto de dos números de dígitos
int encontrarPalindromoMayor() {
    int maxPalindromo = 0;
    for (int i = 999; i >= 99; i--) {
        for (int j = i; j >= 99; j--) {
            int producto = i * j;
            if (esPalindromo(producto) && producto > maxPalindromo) {
                maxPalindromo = producto;
            }
        }
    }
    return maxPalindromo;
}

int main() {
    int palindromoMayor = encontrarPalindromoMayor();
    std::cout << "El palíndromo más grande formado por el producto de dos números de dígitos es " << palindromoMayor << std::endl;
    return 0;
}