#include<iostream>
using namespace std;
int main(){
int a,b;
cout <<"INGRESE UN NUMERO"<<endl;
cin >> a;
cout <<"INGRESE UN NUMERO"<<endl;
cin >> b;

int suma=a+b;
if(suma%2!=0){
    cout<<"LA SUMANUMERO IMPAR"<<endl;
}
else{
    cout<<"LA SUMA ES PAR"<<endl;
}
return 0;


}