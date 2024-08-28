#include <iostream>
using namespace std;
int main(){
 int a,b,c;
 cout<<"INGRESAR 3 NUMEROS"<<endl;
 cin>>a>>b>>c;
 if (c % a == 0) {
        cout << a << " es un factor de " << c << endl;
    } else {
        cout << a << " no es un factor de " << c << endl;
    }

    // Verificar si b es factor de c
    if (c % b == 0) {
        cout << b << " es un factor de " << c << endl;
    } else {
        cout << b << " no es un factor de " << c << endl;
    }

    return 0;
}



