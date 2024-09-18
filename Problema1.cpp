//Encontar la suma de todos los multiplos de 3 o 5 menores a 10000ç
#include<iostream>
using namespace std;

int main(){
    long long j{0};
    int borde=1000000;

    for(int i=0;i<borde;i++){
        if(i%3==0){
            j+=i;
        }
        else if(i%5==0){
            j+=i;     
        }
    }
    cout<<"La suma de todos los multiplos de 3 o 5 a 1000000 es :  "<<j<<endl;
    return 0;
}