//
// Created by cynamon on 11/10/2021.
//

#include <iostream>
#include <string>
#include "../include/calc.h"

using namespace std;

int main(int argc, char* argv[])
{


 int x = stoi(argv[1]);
    int a = stoi(argv[2]);
    int b = stoi(argv[3]);



    switch (x) {

        case 1:

            cout << add(a,b) << endl;
            break;
        case 2:

            cout << subtract(a,b) << endl;
            break;
        case 3:

            if(a<0 || b<0)
            {
                cout << "Pole powierzchni oraz wysokosc nie moga byc ujemne/n" << endl;
                help();
                break;
            }
            cout << volume(a,b) << endl;
            break;
        case 4:
            help();
            break;
        default:
            cout << "Podaj odpowiedni numer dzialania/n" << endl;
            help();
            break;

    }

    return 0;
}
