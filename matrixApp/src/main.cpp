
#include "../../matrixLib/include/matrixLib.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;


//wczytywanie ilosci wierszy
int wiersze(){
    int w;
        cout << "Podaj ilosc wierszy" << endl;

    cin >> w;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Podaj wartosc liczbowa" << endl;
        cin >> w;
    }

    return w;
}
//wczytywanie ilosci kolumn
int kolumny(){
    int k;
    cout << "Podaj ilosc kolumn" << endl;
    cin >> k;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Podaj wartosc liczbowa" << endl;
        cin >> k;
    }

    return k;
}
//alokacja macierzy

//wczytywanie elementow macierzy
void czyt_macierz(int **mac, int w,int k){

    cout << "Podaj wartosci macierzy (wierszami)" << endl;

    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < k; ++j) {
            cin >> mac[i][j];
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000,'\n');
                cout << "Podaj wartosc liczbowa" << endl;
                cin >> mac[i][j];
            }

        }
    }
}

void czyt_macierz(double **mac, int w,int k){

    cout << "Podaj wartosci macierzy (wierszami)" << endl;

    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < k; ++j) {
            cin >> mac[i][j];
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000,'\n');
                cout << "Podaj wartosc liczbowa" << endl;
                cin >> mac[i][j];
            }

        }
    }
}

void czytaj (int &liczba){
    cin >> liczba;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Podaj wartosc liczbowa" << endl;
        cin >> liczba;
    }

}

void czytaj (double &liczba){
    cin >> liczba;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Podaj wartosc liczbowa" << endl;
        cin >> liczba;
    }

}

void czyt_tablica(int *tab, int k){

    cout << "Podaj wartosci tablicy" << endl;

    for (int i = 0; i < k; ++i) {

            cin >> tab[i];
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Podaj wartosc liczbowa" << endl;
            cin >> tab[i];
        }


    }
}

void czyt_tablica(double *tab, int k){

    cout << "Podaj wartosci tablicy" << endl;

    for (int i = 0; i < k; ++i) {

        cin >> tab[i];
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Podaj wartosc liczbowa" << endl;
            cin >> tab[i];
        }

    }
}

//usuwanie macierzy
void usun_macierz(int **mac, int w,int k){

    for(int i = 0; i<w; ++i)
    {
        delete[] mac[i];

    }
    delete[] mac;

}
void usun_macierz(double **mac, int w,int k){

    for(int i = 0; i<w; ++i)
    {
        delete[] mac[i];

    }
    delete[] mac;

}

//usuwanie tablicy
void usun_tablice(int *tablica){

    delete [] tablica;

}
void usun_tablice(double *tablica){

    delete [] tablica;

}
//wypisywanie elementów macierzy
void pisz_macierz(int **mac, int w,int k){

    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < k; ++j) {
            cout << mac[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void pisz_macierz(double **mac, int w,int k){

    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < k; ++j) {
            cout << mac[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}




int main(int argc, char* argv[]) {

if (argc == 1) {

    cout << "Zla ilosc przekazywanych parametrow" << endl;
    help();
    return 0;
}

    if (argc > 3) {

        cout << "Zla ilosc przekazywanych parametrow" << endl;
        help();
        return 0;
    }

    string dzialanie = argv[1];

    int w1, k1;

    bool typ;

    if (dzialanie == "help") {
        help();
        return 0;
    }

    cout << "Podaj typ macierzy/tablicy\n"
            "0- double\n"
            "1-int\n" << endl;


    do {
        cin >> typ;
    } while (typ != 0 && typ != 1);
//----------------------------------------------------------------------------------------------------------------
//macierz/tablica typu int

    if (typ == 1) {
        if (dzialanie == "addMatrix") {


            w1 = wiersze();
            k1 = kolumny();


            int **macierz1 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new int[k1];
            }

            czyt_macierz(macierz1, w1, k1);

            int **macierz2 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz2[i] = new int[k1];
            }


            czyt_macierz(macierz2, w1, k1);
            cout << "\n";


            int **macierz3 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz3[i] = new int[k1];
            }


            macierz3 = addMatrix(macierz1, macierz2, w1, k1);
            pisz_macierz(macierz3, w1, k1);

            usun_macierz(macierz1, w1, k1);
            usun_macierz(macierz2, w1, k1);
            usun_macierz(macierz3, w1, k1);

        } else if (dzialanie == "subtractMatrix") {
            w1 = wiersze();
            k1 = kolumny();

            int **macierz1 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new int[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            int **macierz2 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz2[i] = new int[k1];
            }

            czyt_macierz(macierz2, w1, k1);
            cout << "\n";


            int **macierz3 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz3[i] = new int[k1];
            }


            macierz3 = subtractMatrix(macierz1, macierz2, w1, k1);
            pisz_macierz(macierz3, w1, k1);

            usun_macierz(macierz1, w1, k1);
            usun_macierz(macierz2, w1, k1);
            usun_macierz(macierz3, w1, k1);

        } else if (dzialanie == "multiplyMatrix") {

            w1 = wiersze();
            k1 = kolumny();

            int **macierz1 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new int[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            int k2;
            k2 = kolumny();
            int **macierz2 = new int *[k1];
            for (int i = 0; i < k1; ++i) {
                macierz2[i] = new int[k2];
            }

            czyt_macierz(macierz2, k1, k2);
            cout << "\n";


            int **macierz3 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz3[i] = new int[k2];
            }


            macierz3 = multiplyMatrix(macierz1, macierz2, w1, k1, k2);
            pisz_macierz(macierz3, w1, k2);

            usun_macierz(macierz1, w1, k1);
            usun_macierz(macierz2, k1, k2);
            usun_macierz(macierz3, w1, k2);

        } else if (dzialanie == "multiplyByScalar") {

            w1 = wiersze();
            k1 = kolumny();

            int **macierz1 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new int[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            int s;
            cout << "Podaj skalar" << endl;
            czytaj(s);

            cout << "\n";


            int **macierz3 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz3[i] = new int[k1];
            }


            macierz3 = multiplyByScalar(macierz1, w1, k1, s);
            pisz_macierz(macierz3, w1, k1);

            usun_macierz(macierz1, w1, k1);
            usun_macierz(macierz3, w1, k1);

        } else if (dzialanie == "transpozeMatrix") {

            w1 = wiersze();
            k1 = kolumny();

            int **macierz1 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new int[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            cout << "\n";


            int **macierz3 = new int *[k1];
            for (int i = 0; i < k1; ++i) {
                macierz3[i] = new int[w1];
            }


            macierz3 = transpozeMatrix(macierz1, w1, k1);
            pisz_macierz(macierz3, k1, w1);

            usun_macierz(macierz1, w1, k1);
            usun_macierz(macierz3, w1, k1);

        } else if (dzialanie == "powerMatrix") {

            w1 = wiersze();
            k1 = w1;

            int **macierz1 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new int[k1];
            }
            czyt_macierz(macierz1, w1, k1);
            if (argv[2] == NULL)
            {
                cout << "Nie podano odpowiedniego parametru" << endl;
                help();
                return 0;
            }
            unsigned int potega = stoi(argv[2]);


            int **macierz3 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz3[i] = new int[k1];
            }


            macierz3 = powerMatrix(macierz1, w1, k1, potega);
            cout << "\n";
            pisz_macierz(macierz3, k1, w1);

            usun_macierz(macierz1, w1, k1);
            usun_macierz(macierz3, w1, k1);

        } else if (dzialanie == "determinantMatrix") {

            w1 = wiersze();
            k1 = w1;

            int **macierz1 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new int[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            cout << "\n";
            int determinant;

            determinant = determinantMatrix(macierz1, w1, k1);

            cout << determinant << endl;

            usun_macierz(macierz1, w1, k1);

        } else if (dzialanie == "matrixIsDiagonal") {

            w1 = wiersze();
            k1 = kolumny();

            int **macierz1 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new int[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            cout << "\n";
            bool diagonal;

            diagonal = matrixIsDiagonal(macierz1, w1, k1);

            cout << diagonal << endl;

            usun_macierz(macierz1, w1, k1);


        } else if (dzialanie == "swap") {

            w1 = wiersze();
            k1 = kolumny();

            int **macierz1 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new int[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            cout << "\n";
            int i, j, k, l;
            cout << " Podaj numer wiersza 1 liczby" << endl;
            czytaj(i);
            cout << " Podaj numer kolumny 1 liczby" << endl;
            czytaj(j);
            cout << " Podaj numer wiersza 2 liczby" << endl;
            czytaj(k);
            cout << " Podaj numer kolumny 2 liczby" << endl;
            czytaj(l);

            swap(macierz1[i][j], macierz1[k][l]);

            pisz_macierz(macierz1, w1, k1);

            usun_macierz(macierz1, w1, k1);


        } else if (dzialanie == "sortRow") {

            cout << "\n";
            k1 = kolumny();
            int *tablica = new int[k1];

            czyt_tablica(tablica, k1);

            sortRow(tablica, k1);

            for (int i = 0; i < k1; i++) {
                cout << tablica[i] << " ";
            }

            usun_tablice(tablica);

        } else if (dzialanie == "sortRowsInMatrix") {

            cout << "\n";
            w1 = wiersze();
            k1 = kolumny();

            int **macierz1 = new int *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new int[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            sortRowsInMatrix(macierz1, w1, k1);
            cout << "\n";

            pisz_macierz(macierz1, w1, k1);

            usun_macierz(macierz1, w1, k1);

        } else {
            cout << "Wybrano niepoprawne dzialanie" << endl;
            help();
        }
    }
//-----------------------------------------------------------------------------------------------------------------

//macierz/tablica typu double
    else if (typ == 0) {
        if (dzialanie == "addMatrix") {


            w1 = wiersze();
            k1 = kolumny();


            double **macierz1 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new double[k1];
            }

            czyt_macierz(macierz1, w1, k1);

            double **macierz2 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz2[i] = new double[k1];
            }


            czyt_macierz(macierz2, w1, k1);
            cout << "\n";


            double **macierz3 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz3[i] = new double[k1];
            }


            macierz3 = addMatrix(macierz1, macierz2, w1, k1);
            pisz_macierz(macierz3, w1, k1);

            usun_macierz(macierz1, w1, k1);
            usun_macierz(macierz2, w1, k1);
            usun_macierz(macierz3, w1, k1);

        } else if (dzialanie == "subtractMatrix") {
            w1 = wiersze();
            k1 = kolumny();

            double **macierz1 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new double[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            double **macierz2 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz2[i] = new double[k1];
            }

            czyt_macierz(macierz2, w1, k1);
            cout << "\n";


            double **macierz3 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz3[i] = new double[k1];
            }


            macierz3 = subtractMatrix(macierz1, macierz2, w1, k1);
            pisz_macierz(macierz3, w1, k1);

            usun_macierz(macierz1, w1, k1);
            usun_macierz(macierz2, w1, k1);
            usun_macierz(macierz3, w1, k1);

        } else if (dzialanie == "multiplyMatrix") {

            w1 = wiersze();
            k1 = kolumny();

            double **macierz1 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new double[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            int k2;
            k2 = kolumny();
            double **macierz2 = new double *[k1];
            for (int i = 0; i < k1; ++i) {
                macierz2[i] = new double[k2];
            }

            czyt_macierz(macierz2, k1, k2);
            cout << "\n";


            double **macierz3 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz3[i] = new double[k2];
            }


            macierz3 = multiplyMatrix(macierz1, macierz2, w1, k1, k2);
            pisz_macierz(macierz3, w1, k2);

            usun_macierz(macierz1, w1, k1);
            usun_macierz(macierz2, k1, k2);
            usun_macierz(macierz3, w1, k2);

        } else if (dzialanie == "multiplyByScalar") {

            w1 = wiersze();
            k1 = kolumny();

            double **macierz1 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new double[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            double s;
            cout << "Podaj skalar" << endl;
            czytaj(s);

            cout << "\n";


            double **macierz3 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz3[i] = new double[k1];
            }


            macierz3 = multiplyByScalar(macierz1, w1, k1, s);
            pisz_macierz(macierz3, w1, k1);

            usun_macierz(macierz1, w1, k1);
            usun_macierz(macierz3, w1, k1);

        } else if (dzialanie == "transpozeMatrix") {

            w1 = wiersze();
            k1 = kolumny();

            double **macierz1 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new double[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            cout << "\n";


            double **macierz3 = new double *[k1];
            for (int i = 0; i < k1; ++i) {
                macierz3[i] = new double[w1];
            }


            macierz3 = transpozeMatrix(macierz1, w1, k1);
            pisz_macierz(macierz3, k1, w1);

            usun_macierz(macierz1, w1, k1);
            usun_macierz(macierz3, w1, k1);

        } else if (dzialanie == "powerMatrix") {

            w1 = wiersze();
            k1 = w1;

            double **macierz1 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new double[k1];
            }
            czyt_macierz(macierz1, w1, k1);
            if (argv[2] == NULL)
            {
                cout << "Nie podano odpowiedniego parametru" << endl;
                help();
                return 0;
            }
            unsigned potega = stoi(argv[2]);


            double **macierz3 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz3[i] = new double[k1];
            }


            macierz3 = powerMatrix(macierz1, w1, k1, potega);
            cout << "\n";
            pisz_macierz(macierz3, k1, w1);

            usun_macierz(macierz1, w1, k1);
            usun_macierz(macierz3, w1, k1);

        } else if (dzialanie == "determinantMatrix") {

            w1 = wiersze();
            k1 = w1;

            double **macierz1 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new double[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            cout << "\n";
            int determinant;

            determinant = determinantMatrix(macierz1, w1, k1);

            cout << determinant << endl;

            usun_macierz(macierz1, w1, k1);


        } else if (dzialanie == "matrixIsDiagonal") {

            w1 = wiersze();
            k1 = kolumny();

            double **macierz1 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new double[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            cout << "\n";
            bool diagonal;

            diagonal = matrixIsDiagonal(macierz1, w1, k1);

            cout << diagonal << endl;

            usun_macierz(macierz1, w1, k1);


        } else if (dzialanie == "swap") {

            w1 = wiersze();
            k1 = kolumny();

            double **macierz1 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new double[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            cout << "\n";
            int i, j, k, l;
            cout << " Podaj numer wiersza 1 liczby" << endl;
            czytaj(i);
            cout << " Podaj numer kolumny 1 liczby" << endl;
            czytaj(j);
            cout << " Podaj numer wiersza 2 liczby" << endl;
            czytaj(k);
            cout << " Podaj numer kolumny 2 liczby" << endl;
            czytaj(l);

            swap(macierz1[i][j], macierz1[k][l]);

            pisz_macierz(macierz1, w1, k1);

            usun_macierz(macierz1, w1, k1);


        } else if (dzialanie == "sortRow") {

            cout << "\n";
            k1 = kolumny();
            double *tablica = new double[k1];

            czyt_tablica(tablica, k1);

            sortRow(tablica, k1);

            for (int i = 0; i < k1; i++) {
                cout << tablica[i] << " ";
            }

            usun_tablice(tablica);

        } else if (dzialanie == "sortRowsInMatrix") {

            cout << "\n";
            w1 = wiersze();
            k1 = kolumny();

            double **macierz1 = new double *[w1];
            for (int i = 0; i < w1; ++i) {
                macierz1[i] = new double[k1];
            }
            czyt_macierz(macierz1, w1, k1);

            sortRowsInMatrix(macierz1, w1, k1);
            cout << "\n";

            pisz_macierz(macierz1, w1, k1);

            usun_macierz(macierz1, w1, k1);

        } else {
            cout << "Wybrano niepoprawne dzialanie" << endl;
            help();
        }
    }



    return 0;
}
