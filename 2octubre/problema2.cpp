#include<iostream>
#include<string>

int contarLetras(std::string cadena){
 int count=0;
 for(char c:cadena){
    if(c>='a' && c<='z'|| c>='A' && c<='Z'){
        count++;
    }
 }
 return count;
}

int main(){
    std::string cadena="holamunod2434";
     
     std::cout<<"LA CANTIDAD DE LETRAS EN LA CADENA   "<<cadena<<"    ES: "<<contarLetras(cadena)<<std::endl;
}