#include <iostream>
using namespace std;
int main(){
 int num1,num2 ,num3,num4,num5;
 cout<<"INGRESAR LOS 5 NUMEROS :   "<<endl;
   cin>>num1>>num2>>num3>>num4>>num5;
 int maximo = num1;
 int minimo = num1;

    // Comparar para encontrar el máximo
    if (num2 > maximo) maximo = num2;
    if (num3 > maximo) maximo = num3;
    if (num4 > maximo) maximo = num4;
    if (num5 > maximo) maximo = num5;

    // Comparar para encontrar el mínimo
    if (num2 < minimo) minimo = num2;
    if (num3 < minimo) minimo = num3;
    if (num4 < minimo) minimo = num4;
    if (num5 < minimo) minimo = num5;

    // Imprimir el resultado
    std::cout << "El número más grande es: " << maximo << std::endl;
    std::cout << "El número más pequeño es: " << minimo << std::endl;

    return 0;




}