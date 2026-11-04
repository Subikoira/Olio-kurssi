#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;
/*
 * kullakin kurssilla on:
 * id, nimi, laajuus(opintopisteet)
 * */

class course
{
private:
    int id;
    string name;
    int creditpoints;
public:
    course();
    course(int id, string name, int creditpoints);
    int getId() const;
    void setId(int newId);
    string getName() const;
    void setName(const string &newName);
    int getCreditpoints() const;
    void setCreditpoints(int newCreditpoints);
    void printData();
};

#endif // COURSE_H
