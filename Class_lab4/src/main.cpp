
#include "../include/Class.h"
#include <iostream>



using namespace std;

int main()
{
    unsigned int a;
    unsigned int b;

    Prostopadloscian cuboid1;

    cout << "Podaj pole powierzchni podstawy" << endl;
        cin >> a;
    cout << "Podaj pole powierzchni bocznej" << endl;
        cin >> b;

    cuboid1.setArea1(a);
    cuboid1.setArea2(b);
    cuboid1.countArea();
    cuboid1.printArea();

    cout << "----------------------------------- " << endl;
    cout << "Pole powierzchni prostopadloscianu: " << cuboid1.getArea() << endl;


    return 0;
}