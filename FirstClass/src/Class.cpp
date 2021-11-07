//
// Created by cynamon on 25/10/2021.
//

#include "../include/Class.h"
#include <iostream>
#include <string>
using namespace std;

void Class:: showBasicData(){
    cout << productName << " " << price << "gr" << endl;

};

void Class:: showDetails(){
    cout << weight << " kg, " << amount << " pcs. " << endl;

};
void Class:: showAllData(){
    showBasicData();
    showDetails();

};

Class::Class (string productName, unsigned int price, unsigned int weight, unsigned int amount):
        price(price), weight(weight), amount(amount){
    this->productName = productName;
}

void Class:: setPrice(unsigned int price) {
    this-> price = price;
}


unsigned int Class:: getPrice() {
    return price;
}