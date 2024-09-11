#include<iostream>
#include"Student.h"
using namespace std;

int main(){
    Student account1{"Mauricio Jerson",56};
    Student account2{"Jane Green",76};
    
    cout<<account1.getName()<<" s letter grade equivalent of"
          <<account1.getAverage()<<" is:  "
          <<account1.getLetterGrade()<<" \n ";
    cout<<account2.getName()<<" s letter grade equivalent of"
          <<account2.getAverage()<<" is:  "
          <<account2.getLetterGrade()<<endl;
}