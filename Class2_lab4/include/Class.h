//
// Created by cynamon on 07/11/2021.
//

#ifndef JIPP_CLASS_H
#define JIPP_CLASS_H

#include <iostream>
#include <string>

using namespace std;

class Kula {
private:

    unsigned int r;
    unsigned int volume;

public:

    Kula();

    void setRadius(unsigned int r);
    void countVolume();
    void printVolume();
    unsigned int getVolume();

};

#endif //JIPP_CLASS_H
