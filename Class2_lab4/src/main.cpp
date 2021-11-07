
#include "../include/Class.h"
#include <iostream>



using namespace std;

int main()
{
    unsigned int r;

    Kula sphere;

    cout << "Podaj promien kuli" << endl;
    cin >> r;

    sphere.setRadius(r);
    sphere.countVolume();
    sphere.printVolume();

    cout << "----------------------------------- " << endl;
    cout << "Objetosc kuli: " << sphere.getVolume() << endl;
    cout << "----------------------------------- " << endl;

    return 0;
}