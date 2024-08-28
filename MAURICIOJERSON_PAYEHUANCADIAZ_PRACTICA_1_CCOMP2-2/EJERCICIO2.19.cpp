#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"INGRESE TRES NUMEROS DIFERENTES";
  cin >> a >> b >> c;
int menor = a;
int mayor = a;

    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    if (b > mayor) {
        mayor = b;
    }
    if (c > mayor) {
        mayor = c;
    }
cout<<"SUMA ES"<<a+b+c<<endl;
cout<<"EL PROMEDIO ES"<<(a+b+c)/3<<endl;
cout<<"EL PRODUCTO ES"<<a*b*c<<endl;
cout << "Menor: " << menor << endl;
cout << "Mayor: " << mayor << endl;

    return 0;

}


