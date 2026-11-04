#include "course.h"

int course::getId() const
{
    return id;
}

void course::setId(int newId)
{
    id = newId;
}

string course::getName() const
{
    return name;
}

void course::setName(const string &newName)
{
    name = newName;
}

int course::getCreditpoints() const
{
    return creditpoints;
}

void course::setCreditpoints(int newCreditpoints)
{
    creditpoints = newCreditpoints;
}

void course::printData()
{
    cout<<id<<" : "<<name<<" : "<<creditpoints<<endl;
}

course::course() {}

course::course(int id, string name, int creditpoints)
{
    this->id=id;
    this->name=name;
    this->creditpoints=creditpoints;
}
