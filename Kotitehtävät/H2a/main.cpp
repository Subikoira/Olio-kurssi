#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>
using namespace std;

int main()
{
    Car car;
    car.setBrand("Toyota");
    car.setModel("Supra");
    car.setYearModel(1999);
    car.printData();
    cout << endl;

    Rectangle* rect = new Rectangle;
    rect->setWidth(5);
    rect->setHeight(4);
    cout << "Area: " << rect->getArea() << endl;
    cout << "Circumference: " << rect->getCircum() << endl;
    delete rect;
    cout << endl;

    shared_ptr<Student> student = make_shared<Student>();

    student->setName("Uuno Turhapuro");
    student->setStudentNumber(54321);
    student->setAverage(1.5);
    cout << "Name: " << student->getName () << endl;
    cout << "Student number: " << student->getStudentNumber () << endl;
    cout << "Average: " << student->getAverage () << endl;

 return 0;
}
