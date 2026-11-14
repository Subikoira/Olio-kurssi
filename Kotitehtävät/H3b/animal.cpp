#include "animal.h"

Animal::Animal() {
    cout << "Animal konstruktori" << endl;
}
Animal::~Animal() {
    cout << "Andimal destruktori" << endl;
}
void Animal::callOut() {
    cout << "Elain aantelee" << endl;
}
