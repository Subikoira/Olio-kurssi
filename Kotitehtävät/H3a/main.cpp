#include <iostream>
#include "Chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef gordon("Gordon Ramsey");
    gordon.makeSalad();
    gordon.makeSoup();

    cout << endl;

    ItalianChef anthony("Anthony Bourdain");
    anthony.makeSalad();
    anthony.makePasta();
    anthony.makeSoup();

    cout << "Name of the Italian chef is "
         << anthony.getName() << endl;

    return 0;
}
