#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"INGRESE EL NUMERO :";
    cin>>num;
    int var{0};
    

     while (2 * var + 1 <= num) {
        int impar = 2 * var + 1;

        if (2 * (var + 1) + 1 <=num) {
            cout << impar << ", ";//Imprmir con coma antes del ultimo
        } else {
            cout << impar;
        }

        var++;
    }

    return 0;
    
}