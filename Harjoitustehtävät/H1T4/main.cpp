#include <iostream>
#include <string>
using namespace std;

int main()
{
    string syöte;

    cout << "Anna luku: ";
    cin >> syöte;

    try {
        int luku = stoi(syöte);
        cout << "Annoit luvun: " << luku << endl;
        }
    catch (...) {
        cout << "Virheellinen syote!" << endl;
        }

    return 0;
}
