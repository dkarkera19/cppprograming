#include<iostream>
int main(){
    int n1=10;
    int *ptr=&n1;
    int **sptr=&ptr;

    //data inside n1
    std::cout<<"data inside n1:"<<n1<<"\n";

    //data inside sptr
    std::cout<<"data inside sptr"<<sptr<<"\n";

    //jump ptr 1 time
    std::cout<<"jump ptr 1 time:"<<*ptr<<"\n";

    //jump sptr 2 times
    std::cout<<"jump sptr 2 time:"<<**sptr<<"\n";

    //address of n1
    std::cout<<"address of n1:"<<&n1<<"\n";

    //address of ptr
    std::cout<<"address of ptr:"<<&ptr<<"\n";

    //address of sptr
    std::cout<<"address of sptr:"<<&sptr<<"\n";
}