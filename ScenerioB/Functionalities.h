#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Car.h"

/* this function should create object on heap and store their pointers in the array*/

void CreateObjects(Car* arr[3]);

/* average price of all cars*/

float AveragePrice(Car* arr[3]);

/*
demo of calculate tax*/

void CallCalculateTax(Car* arr[3]);

/*
delete all acquired memory*/

void FreeMemory(Car* arr[3]);

#endif // FUNCTIONALITIES_H
