#include<iostream>
#include <vector>

bool esPrimo(int n){
    if(n<=1){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for (int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int contarPrimos(std::vector<int>arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(esPrimo(arr[i])){
            count++;
        }
    }
    return count;
}

int main(){
    std::vector<int>arr={2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n=arr.size();

std::cout<<contarPrimos(arr,n);
}