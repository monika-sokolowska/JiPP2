
#ifndef JIPP_CLASS_H
#define JIPP_CLASS_H

#include <iostream>
#include <string>

using namespace std;

class Prostopadloscian {
private:

    unsigned int area1;
    unsigned int area2;
    unsigned int area3;

public:

    Prostopadloscian();

    void setArea1(unsigned int area1);
    void setArea2(unsigned int area2);
    void countArea();
    void printArea();
    unsigned int getArea();

};

#endif //JIPP_CLASS_H
