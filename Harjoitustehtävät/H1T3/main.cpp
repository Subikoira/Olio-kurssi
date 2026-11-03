#include <iostream>

using namespace std;

int main()
{
    int luku;
    cout << "Anna kokonaisluku: ";
    cin >> luku;

    if (luku % 2 == 0)
        cout << "Luku on parillinen.";
    else
        cout << "Luku on pariton";

    return 0;
}
