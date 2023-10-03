#include "Vehical.h"
#include"Type.h"
#include<iostream>

Vehical::Vehical(std::string id, std::string brand, Type type, float price)
    :_id(id), _brand(brand), _type(type), _price(price)
{
}

Vehical::Vehical(std::string id, std::string brand, Type type)
    :_id(id), _brand(brand), _type(type)
{
}
