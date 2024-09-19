#include <iostream>

// Función para encontrar el producto de los dígitos adyacentes en el 1000
int encontrarProductoMayor() {
    int maxProducto = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 6; k++) {
                for (int l = k + 1; l < 7; l++) {
                    int producto = (i + 1) * (j + 1) * (k + 1) * (l + 1);
                    if (producto > maxProducto) {
                        maxProducto = producto;
                    }
                }
            }
        }
    }
    return maxProducto;
}

int main() {
    int productoMayor = encontrarProductoMayor();
    std::cout << "El producto mayor de los dígitos adyacentes en el 1000 es " << productoMayor << std::endl;
    return 0;
}