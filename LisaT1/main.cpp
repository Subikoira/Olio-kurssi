#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    //luodaan olio pinoon
    Car objCar1("Audi","A5",2013);
    objCar1.display();


    //luodaan olio kekoon raakapointterilla
    Car *objCar2=new Car("Toyota","Yaris",1999);
        objCar2->display();
    //Tällä tavalla luotu olio on tuhottava
    delete objCar2;
    objCar2=nullptr;


    //luodaan olio kekoon smartpointterilla
    unique_ptr<Car> objCar3=make_unique<Car>("Ransitti","Sellanen avolava tai jokin",2005);
    objCar3->disblay();

    return 0;
}
