#include "Car.h"
#include "Vehical.h"

Car::Car(std::string id, std::string brand, float price, VehicalType type,CarType cType)
:Vehical(id,brand,price,type),_car_type_(cType)
{
}

Car::Car(std::string id, std::string brand,VehicalType type, CarType cType)
:Vehical(id,brand,type),_car_type_(cType)
{
}
float Car:: CalculateTax(){
    return 0.1f*price();
}