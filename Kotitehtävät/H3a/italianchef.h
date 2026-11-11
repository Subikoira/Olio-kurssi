#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "Chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string n);
    ItalianChef();

    string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
