//
// Created by cynamon on 25/10/2021.
//

#include <iostream>
#include <string>
using namespace std;

struct samochod{
    char marka;
    char model[20];
    int rokProdukcji;
    char kolor[20];
    char miejsceProdukcji[20];
};



int main() {
    int liczba_samochodow = 4;

    samochod samochod[] = {{"Skoda", "Fabia", 1999, "bialy",    "Czechy"},
                        {   "Audi",         "A4",    2015, "czarny",   "Niemcy"},
                        {   "Toyota",       "Yaris", 1995, "szary",    "Francja"},
                        {   "Hyundai",      "i20",   2001, "czerwony", "Indie"} };

    cout << "Marka\tModel \tRok \tKolor \tMiejsceProdukcji" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < liczba_samochodow; i++)
    {
        cout << samochod[i].marka << "\t" << samochod[i].model << "\t" << samochod[i].rokProdukcji << "\t" << samochod[i].kolor << "\t" << samochod[i].miejsceProdukcji << endl;
    }

    return 0;
}
