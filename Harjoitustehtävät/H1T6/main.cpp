#include <iostream>

using namespace std;

int tuplaa(int luku) {
    return luku * 2;
}

void luvunTulostus(int luku){
    cout << "Tulos: " << luku << endl;
}

int main()
{
    int luku;
    cout << "Anna kokonaisluku: ";
    cin >> luku;

    int tuplattuLuku = tuplaa(luku);
    luvunTulostus(tuplattuLuku);

    return 0;
}
