#ifndef VEHICAL_H
#define VEHICAL_H

#include<iostream>
#include"VehicalType.h"

class Vehical
{
private:
    std::string _id;
    std::string _brand;
    float _price;
    VehicalType _type;

public:
    Vehical(const Vehical& obj)=default;
    Vehical(std::string id, std::string brand, float price, VehicalType type);
    Vehical(std::string id, std::string brand, VehicalType type);
    virtual float CalculateTax()=0;// pure virtual function (known as abstract method in java)
    ~Vehical(){
        std::cout<<"object with id"<<_id<<"is destroyed\n";
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicalType type() const { return _type; }
     
};

#endif // VEHICAL_H
