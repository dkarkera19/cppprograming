#include<iostream>
#include"department.h"

class student
{
private:
    int_roll_number;
    std::string_name;
    float_fees;
    char_grade;
    Department _dept;//IT,CS,AI_ML

public:
    student() =default;
    student(int rnum,
    std::string name,
    float fees,
    char grade,
    Deartment dept){
        this->_name=name;
        this->_fees=fees;
        this->_roll_number=rnum;
        this->_grade=grade;
        this->_dept=dept;
    }
    ~student() {
        std::cout<<"student with roll number:"
        <<this->_roll_number
        <<"is now destroyed\n";
    }
};

int main(){
    //stack
    student s1(101,"harshith",87777.0f,'A',Department::CS);
     student s3(103,"harshith",87777.0f,'A',Department::CS);


    //heap
    student* s2=new student(202,"rohan",87669.0f,'A',Departement::AI_ML);
    student* s4=new student(204,"rohan",87669.0f,'A',Departement::AI_ML);
    delete s2;

    student arr[2] ={s1,s3};//array of stack allocated student object
    student* heapArr[2]={s2,s4};

    student* temp[3]
}