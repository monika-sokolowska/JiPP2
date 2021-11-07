#include "../include/Class.h"
#include <iostream>
#include <math.h>

using namespace std;

void Kula::setRadius(unsigned int r){
    this->r = r;
    cout << "Promien: " << r << endl;
}

void Kula::countVolume(){
volume = M_PI*r*r*r*4/3;
}

void Kula::printVolume(){

    cout << "Objetosc kuli: " << volume << endl;
}

unsigned int Kula::getVolume(){
    return volume;
}

Kula::Kula()
{
    r = 0;
    volume = 0;

    cout << "Promien kuli: " << r << endl;
    cout << "\n";

}