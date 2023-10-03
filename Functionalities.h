/*
a function to create the 3 objects on the heap
*/
//can every single object do this? or should a single object be able to do this?

#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Vehical.h"

void CreateObjects(Vehical*container[3]);

/* function to find average of price values of 3 objects in the container array*/

float AveragePrice(Vehical*container[3]);



#endif // FUNCTIONALITIES_H
