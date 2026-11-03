#include "henkilo.h"
#include <iostream>

using namespace std;

int main()
{
    Henkilo objHenkilo1;
    objHenkilo1.setNimi("Taneli Kaneli");
    objHenkilo1.setIka(34);
    Henkilo objHenkilo2;
    objHenkilo2.setNimi("Suppilo Vahvero");
    objHenkilo2.setIka(78);
    //cout<<objHenkilo1.getNimi();
    objHenkilo1.tulostaTiedot();
    objHenkilo2.tulostaTiedot();


    Henkilo objHenkilo3("Super Marjo",42);
    objHenkilo3.tulostaTiedot();
    return 0;
}
