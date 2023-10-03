#include<iostream>

void magic(int data){
    std::cout<<"address of n1:"<< &data << "\n";
    std::cout<<"content in n1:"<< data << "\n";

    data=100;

    std::cout<<"after modification, data is:" << data <<"\n"
}

int main(){
    int n1=10;
    magic(10);
    magic(n1);

    std::cout << "value in main after calling magic:"<< n1 <<"\n";
}

