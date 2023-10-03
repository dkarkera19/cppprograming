#include "Vehical.h"
#include "VehicalType.h"
#include "Car.h"

Vehical::Vehical(std::string id, std::string brand, float price, VehicalType type)
:_id(id),_brand(brand),_type(type),_price(price)
{
}

Vehical::Vehical(std::string id, std::string brand, VehicalType type)
:_id(id),_brand(brand),_type(type)
{
}
