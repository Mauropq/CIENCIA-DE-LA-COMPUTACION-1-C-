#include<iostream>
#include<vector>

std::vector<int>elevaAlCuadrado(const std::vector<int>&vector){
    std::vector<int>resultado;
    for(int i=0;i<vector.size();i++){
        resultado.push_back(vector[i]*vector[i]);
    }
    return resultado;
}
int main(){
    std::vector<int>vector={1,2,3,4,5};

    std::vector<int>resultado=elevaAlCuadrado(vector);

    for(int x:resultado){
        std::cout<<x<<"  ";
    }
}