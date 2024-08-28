#include <iostream>
using namespace std;
int main(){
int num;
cout<<"INGRESE EL NUMERO DE 4 DIGITOS"<<endl;
cin>>num;

cout<<num%10<<" "<<(num/10)%10<<" "<<(num/100)%10<<" "<<num/1000<<endl;
return 0;



}