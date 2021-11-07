
#include "../include/Class.h"
#include <iostream>

using namespace std;



void Prostopadloscian::setArea1(unsigned int area1){
    this->area1 = area1;
    cout << "Pole powierzchni podstawy: " << area1 << endl;
}

void Prostopadloscian::setArea2(unsigned int area2){
    this->area2 = area2;
    cout << "Pole powierzchni bocznej: " << area2 << endl;
}

void Prostopadloscian::countArea(){
    area3 = 2*area1+area2;
}

void Prostopadloscian::printArea(){

    cout << "Pole powierzchni prostopadloscianu: " << area3 << endl;
}

unsigned int Prostopadloscian::getArea() {
    return area3;
}

Prostopadloscian::Prostopadloscian()
{
    area1 = 0;
    area2 = 0;
    area3 = 0;

    cout << "Pole powierzchni podstawy: " << area1 << endl;
    cout << "Pole powierzchni bocznej: " << area2 << endl;
    cout << "\n";

}

