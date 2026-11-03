#include <iostream>
#include "car.h"
using namespace std;

int main()
{
    Car objCar=("Volokkari", "Ransportteri",1980);
    cout<<objCar.getMake()<<","<<objCar.getModel()<<","<<objCar.getYear()<<endl;
    return 0;
}
