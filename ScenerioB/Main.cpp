#include "Car.h"
#include "Functionalities.h"

int main(){
    //3 locations reserved; each location can store 8 bytes(address)
    Car* arr[3];

    CreateObjects(arr);
    std::cout<<"average "<<AveragePrice(arr);
    FreeMemory(arr);
}