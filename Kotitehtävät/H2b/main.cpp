#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;
    carList.push_back(Car("Toyota", "Supra", 1999));
    carList.push_back(Car("Audi", "A5", 2014));
    carList.push_back(Car("Toyota", "Hiace", 1993));

    cout << "Second car:" << endl;
    carList.at(1).printData();

    cout << endl;
    cout << "All cars:" << endl;

    for(unsigned int i = 0; i < carList.size(); i++)
    {
        carList.at(i).printData();
        cout << endl;
    }
    return 0;
}
