#include <iostream>
#include "person.h"
#include <memory>
using namespace std;

int main()
{
    Person objPerson1("Teppo Kepponen",26);
    objPerson1.printData();
    Person *objPerson2=new Person("Jokisen Evaat",42);
    objPerson2->printData();
    //Olio pitää muistaa tuhota
    delete objPerson2;
    objPerson2=nullptr;

    //smartpointterilla
    unique_ptr<Person> objPerson3 = make_unique<Person>("Ville Vallaton", 87);
    objPerson3->printData();
    return 0;
}
