
#include "../include/Class.h"
#include <iostream>



using namespace std;

int main()
{
    unsigned int a;

    Kula sphere;

    cout << "Podaj promien kuli" << endl;
    cin >> a;

    sphere.setRadius(a);
    sphere.countVolume();
    sphere.printVolume();

    cout << "----------------------------------- " << endl;
    cout << "Objetosc kuli: " << sphere.getVolume() << endl;
    cout << "----------------------------------- " << endl;

    return 0;
}