#include <iostream>

using namespace std;

int tuplaa(int luku) {
    return luku * 2;
}

int main()
{
    int luku;
    cout << "Anna kokonaisluku ";
    cin >> luku;
    cout << "Tuplattuna: " << tuplaa(luku) << endl;

    return 0;
}
