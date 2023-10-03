#ifndef VEHICAL_H
#define VEHICAL_H

#include<iostream>
#include"Type.h"
class Vehical
{
private:
    std::string _id;
    std::string _brand;
    Type _type;
    float _price;

public:
    Vehical( 
        std::string id,
        std::string brand,
        Type type,
        float price
); 
Vehical( 
        std::string id,
        std::string brand,
        Type type
); 
//defaulted copy constructor
//i will not write the body of copy constructor. compiler should generate a default
//version of  it during compilation
Vehical(const Vehical&)=default;

//this is also copy constructor but in different way but first one is better
/*Vehical(const Vehical& obj) {
    this->_id=obj._id;
    this->_brand=obj._brand;
    this->_price=obj._price;
    this->_type=obj._type;
}*/
   /* ~Vehical() {
        std::cout<<""
    }*/

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    Type type() const { return _type; }

    float price() const { return _price; }
};

#endif // VEHICAL_H
