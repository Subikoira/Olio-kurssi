#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "functions.h"
using namespace std;

void calcSum(int a, int b){
    cout << a << " + " << " = " << a + b << endl;
}
void calcDiv(int a, int b)
{
    if (b == 0)
    {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    }
    else
    {
        cout << fixed << setprecision(2);
        cout << a << " / " << b << " = " << (float)a / b << endl;
    }
}

int retSum(int a, int b)
{
    return a + b;
}
float retDiv(int a, int b)
{
    if (b == 0)
    {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return (float)a / b;
}

