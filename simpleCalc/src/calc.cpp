#include <iostream>
#include "../include/calc.h"
#include <string>
using namespace std;

int add(int a, int b)
{
return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

int volume(int a, int b)
{
    return a*b;
}

void help()
{
    cout << "Simple calculator/n"
            "simpleCalc [nazwa działania]/n/n"

            "Działania:/n"
            "1.add [a] [b]/n/n"
            "Dodawanie dwóch liczb ([a] i [b]) całkowitych./n"
            "2.subtract [a] [b]/n/n"
            "Odejmowanie dwóch liczb ([a] i [b]) całkowitych./n"
            "3.volume [a] [b]/n/n"
            "Obliczanie objętosci graniastoslupa prostego o podstawie trapezu/n"
            "[a]-pole powierzchni/n"
            "[b]-wysokosc graniastoslupa/n/n"
            "4.help/n"
            "Wyswietlenie dokumentacji/n/n";

}