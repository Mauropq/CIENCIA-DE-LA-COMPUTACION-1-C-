#include<iostream>
using namespace std;

int fibo(){
   int m=0;
   int n=1;
   int o=0;
   int sum=o;
   while(o<4000000){
    o=n+m;
    m=n;
    n=o;
if (o%2==0){
    sum=sum+o; 
}
   }
   return sum;
}
    
int main(){
    cout<<fibo()<<endl;
    
}