//
// Created by cynamon on 25/10/2021.
//
#include "../include/FirstClass.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
    FirstClass product("Pass exam", 10000, 1000, 0);

    product.showAllData();

    product.setPrice(2000000000);

    product.showAllData();

    cout << product.getPrice() << endl;

    return 0;
}