#include<iostream>

 int main(){
    int arr[5]={1,2,3,4,5};

    std::cout<<"content of arr: (address of first location)"<<arr<<"\n"

    std::cout<<"address of first location:"<<(arr+0)<<"\n" //0x100H + 0*4 = 0x100H 

    std::cout<<"content inside fifth loaction"<<*(arr+4)<<"\n"
 }