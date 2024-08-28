#include <iostream>

using namespace std;

int main() {
    char caracter;

    
    cout << "Ingrese un carácter: ";
    cin >> caracter;

    
    cout << "El valor entero del carácter '" << caracter << "' es " << static_cast<int>(caracter) << endl;

    return 0;
}
