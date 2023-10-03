 
 #ifndef CAR_H
#define CAR_H

#include"Vehical.h"
#include"CarType.h"
class Car:public Vehical{
    private:
    CarType _car_type_;

    public:
    //4+1
    Car(std::string id,std::string brand, float price,VehicalType type, CarType cType);
    //3+1
    Car(std::string id,std::string brand, VehicalType type,CarType cType);
    //override if v miss the file wii be useful
    float CalculateTax() override;

    ~Car(){
        std::cout<<"car part of vehical with id:"<<id()<<"id destroyed\n";
    }
    CarType carType() const {return _car_type_;}
};

 
#endif // CAR_H
