#include <iostream>
#include <vector>
#include <memory>
#include "course.h"
using namespace std;

int main()
{
    //luodaan smartpointterilla vektori Course-olioille
    unique_ptr<vector<course>> courseList = make_unique<vector<course>>();

    courseList->emplace_back(101,"Olio-ohjelmointi",5);
    courseList->emplace_back(102,"Tietokannat ja rajapinnat",5);
    courseList->emplace_back(103,"Linux adminstation",5);
    //tulostetaan vektoriin data
    for(course &objCourse : *courseList){
        objCourse.printData();
    }
    //Kysytään käyttäjältä kurssin id
    //ja tulostetaan kyseisen kurssin data
    int x;
    int check=0;
    cout<<"Anna kurssin id, niin tulostertaan sen tiedot :";
    cin>>x;
    for(course &objCourse : *courseList){
        if(objCourse.getId()==x){
            objCourse.printData();
            check=1;
            break;//ei jatketa etsimist, jkos id löytyy
        }
        }
        if(check==0){
            cout<<"Annetulla id arvolla ei ole kurssia"<<endl;
        }

    return 0;
}
