#include<iostream>
#include<string>
using namespace std;

class Student {
      public:
        Student(string studentName , int studentAverage)
            : name(studentName){
               setAverage(studentAverage);
            }
        void setName(string studentName){
            name=studentName;
        }

        string getName()const{
            return name;
        }

        void setAverage(int studentAverage){
            if (studentAverage>0){
                if (studentAverage<=100){
                    average=studentAverage;
                }
            }
        }
        
        int getAverage() const {
            return average;
        }

        string getLetterGrade() const {
            string letterGrade;
            if(average>=90){
                letterGrade="A";
            }
            else if (average>=80){
                letterGrade="B";
            }
            else if(average>=70){
                letterGrade="C";
            }
            else if(average>=60){
                letterGrade="D";
            }
            else {
                letterGrade="F";
            }
            return letterGrade;
        }
      private:
          string name;
          int average{0};

};