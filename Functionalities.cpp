#include "Functionalities.h"
#include"Vehical.h"
#include"Type.h"

void CreateObjects(Vehical *container[3])
{
    container[0]=new Vehical("v101","maruti",Type::CAR,870000.0f);
    container[1]=new Vehical("v102","honda",Type::CAR,670000.0f);
    container[2]=new Vehical("v103","toyota",Type::CAR,780000.0f);

}

/*
loop over all location of the array
for each location's pointer
access _price attribute
add it total

divide total by 3 and return  */

float AveragePrice(Vehical *container[3])
{
    float total =0.0f;
    for(int i=0;i<3;i++){
       //if use star then dont use arraw and vica versa because it has same functionality that is jump
        //tottal is added with previous total and price value taken from address at i position
        total += (container[i])->price();
    }

    return total/3;
}
