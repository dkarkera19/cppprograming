#include"Vehical.h"
#include"Type.h"

#include"Functionalities.h"

/*
a) developer makes a container of objects. container is copied when create objects is called from 
createobject function to main function
b) user creates an empty container.user passes its reference to the function developer accessses
this reference puts the objects directly in that container*/
int main(){
    Vehical* arr[3];
    CreateObjects(arr);
    std::cout<<"average price:" <<AveragePrice(arr);
}