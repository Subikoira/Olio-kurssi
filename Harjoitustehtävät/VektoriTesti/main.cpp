#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> luvutVektori;
    int luku=1;
    while(luku != 99){
        cout<<"Anna luku 1-10 (Lopeta antamalla "99)"<<endl;
        cin>>luku;
        //Lisätään annettu luku vektoriin
        luvutVektori.push_back(luku);
    }
    cout << "Vektorissa on luvut:" << endl;
    for(int vluku: luvutVektori){
        //vluku luetaan vektorista ytksi kerrallaan
        if(vluku != 99)
        cout<<vluku <<" ";
    }
    cout<<endl;
    return 0;
}
