
#include "matrixLib.h"
#include <iostream>
#include <math.h>

using namespace std;



int **addMatrix(int **a, int **b, int wiersz, int kolumna){
    int **c = new int *[wiersz];
    for (int i = 0; i < wiersz; ++i) {
        c[i] = new int[kolumna];
    }

for (int i=0; i<wiersz; ++i){
    for(int j=0; j< kolumna; ++j){
        c[i][j] = a[i][j] + b[i][j];
    }
}

return c;

}

int **subtractMatrix(int **a, int **b, int wiersz, int kolumna){

    int **c = new int *[wiersz];
    for (int i = 0; i < wiersz; ++i) {
        c[i] = new int[kolumna];
    }

    for (int i=0; i<wiersz; ++i){
        for(int j=0; j< kolumna; ++j){
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    return c;

}

int **multiplyMatrix(int **a, int **b, int wiersz1, int kolumna1, int kolumna2){
    int **c = new int *[wiersz1];
    for (int i = 0; i < wiersz1; ++i) {
        c[i] = new int[kolumna2];
    }

    for (int i = 0; i < wiersz1; i++)
    {

        for (int j = 0; j < kolumna2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < kolumna1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    return c;
}

int **multiplyByScalar(int **a, int wiersz, int kolumna, int skalar){
    int **c = new int *[wiersz];
    for (int i = 0; i < wiersz; ++i) {
        c[i] = new int[kolumna];
    }

    for (int i=0; i<wiersz; ++i){
        for(int j=0; j< kolumna; ++j){
            c[i][j] = skalar * a[i][j];
        }
    }
    return c;
}

int **transpozeMatrix(int **a, int wiersz, int kolumna){
    int **c = new int *[kolumna];
    for (int i = 0; i < kolumna; ++i) {
        c[i] = new int[wiersz];
    }

    for (int i=0; i<kolumna; ++i){
        for(int j=0; j< wiersz; ++j){
            c[i][j] = a[j][i];
        }
    }
    return c;
}

int **powerMatrix(int **a, int wiersz, int kolumna, unsigned int potega){
    int **c = new int *[wiersz];
    for (int i = 0; i < wiersz; ++i) {
        c[i] = new int[kolumna];
    }

    for (int i = 0; i < wiersz; i++)
    {
        for (int j = 0; j < kolumna; j++)
        {
            c[i][j] = a[i][j];
        }
    }

    if(potega == 0)
    {
        for (int i = 0; i < wiersz; i++)
        {
            for (int j = 0; j < kolumna; j++)
            {
                if(i==j){
                    c[i][j]=1;
                }
                else{
                    c[i][j]=0;
                }
            }
        }
    }

    else if(potega == 1){
        return c;
    }
    else {

        for (int l = 1; l < potega; l++) {
            c = multiplyMatrix(a, c, wiersz, kolumna, kolumna);
        }


    }


    return c;
}

int determinantMatrix(int **a, int wiersz, int kolumna){

    int det = 0;

    int **c = new int *[wiersz];
    for (int i = 0; i < wiersz; ++i) {
        c[i] = new int[kolumna];
    }

    if (wiersz == 2) {
        return ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));
    }
    else {
        for (int x = 0; x < wiersz; x++) {
            int subi = 0;
            for (int i = 1; i < wiersz; i++) {
                int subj = 0;
                for (int j = 0; j < wiersz; j++) {
                    if (j == x)
                        continue;
                    c[subi][subj] = a[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1, x) * a[0][x] * determinantMatrix (c, wiersz - 1 , kolumna -1));
        }
    }


    return det;
}

bool matrixIsDiagonal(int **a, int wiersz, int kolumna){
    bool diagonal=1;

    for(int i=0;i<wiersz;i++)
    {
        for(int j=0;j<kolumna;j++)
        {
            if(i!=j && a[i][j]!=0)
            {
                diagonal=0;
                break;
            }
        }
    }
    return diagonal;
}

void swap(int &a, int &b){
 int c=a;
 a=b;
 b=c;

}

void sortRow(int a[], int n){
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++)
    {
        swapped = false;
        for (j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
                swapped = true;
            }
        }

        // IF no two elements were swapped by inner loop, then break
        if (swapped == false)
            break;
    }
}

void sortRowsInMatrix(int **a, int wiersz, int kolumna){
    for(int i=0; i<wiersz; i++){
        sortRow(a[i],kolumna);
    }
}




double **addMatrix(double **a, double **b, int wiersz, int kolumna){
    double **c = new double *[wiersz];
    for (int i = 0; i < wiersz; ++i) {
        c[i] = new double[kolumna];
    }

    for (int i=0; i<wiersz; ++i){
        for(int j=0; j< kolumna; ++j){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    return c;

}

double **subtractMatrix(double **a, double **b, int wiersz, int kolumna){

    double **c = new double *[wiersz];
    for (int i = 0; i < wiersz; ++i) {
        c[i] = new double[kolumna];
    }

    for (int i=0; i<wiersz; ++i){
        for(int j=0; j< kolumna; ++j){
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    return c;

}

double **multiplyMatrix(double **a, double **b, int wiersz1, int kolumna1, int kolumna2){
    double **c = new double *[wiersz1];
    for (int i = 0; i < wiersz1; ++i) {
        c[i] = new double[kolumna2];
    }

    for (int i = 0; i < wiersz1; i++)
    {

        for (int j = 0; j < kolumna2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < kolumna1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    return c;
}

double **multiplyByScalar(double **a, int wiersz, int kolumna, double skalar){
    double **c = new double*[wiersz];
    for (int i = 0; i < wiersz; ++i) {
        c[i] = new double[kolumna];
    }

    for (int i=0; i<wiersz; ++i){
        for(int j=0; j< kolumna; ++j){
            c[i][j] = skalar * a[i][j];
        }
    }
    return c;
}

double **transpozeMatrix(double **a, int wiersz, int kolumna){
    double **c = new double *[kolumna];
    for (int i = 0; i < kolumna; ++i) {
        c[i] = new double[wiersz];
    }

    for (int i=0; i<kolumna; ++i){
        for(int j=0; j< wiersz; ++j){
            c[i][j] = a[j][i];
        }
    }
    return c;
}

double **powerMatrix(double **a, int wiersz, int kolumna, unsigned potega){
    double **c = new double *[wiersz];
    for (int i = 0; i < wiersz; ++i) {
        c[i] = new double[kolumna];
    }

    for (int i = 0; i < wiersz; i++)
    {
        for (int j = 0; j < kolumna; j++)
        {
            c[i][j] = a[i][j];
        }
    }

    if(potega == 0)
    {
        for (int i = 0; i < wiersz; i++)
        {
            for (int j = 0; j < kolumna; j++)
            {
                if(i==j){
                    c[i][j]=1;
                }
                else{
                    c[i][j]=0;
                }
            }
        }
    }

    else if(potega == 1){
        return c;
    }
    else {

        for (int l = 1; l < potega; l++) {
            c = multiplyMatrix(a, c, wiersz, kolumna, kolumna);
        }


    }


    return c;
}

double determinantMatrix(double **a, int wiersz, int kolumna){

    double det = 0;

    double **c = new double *[wiersz];
    for (int i = 0; i < wiersz; ++i) {
        c[i] = new double[kolumna];
    }

    if (wiersz == 2) {
        return ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));
    }
    else {
        for (int x = 0; x < wiersz; x++) {
            int subi = 0;
            for (int i = 1; i < wiersz; i++) {
                int subj = 0;
                for (int j = 0; j < wiersz; j++) {
                    if (j == x)
                        continue;
                    c[subi][subj] = a[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1., x) * a[0][x] * determinantMatrix (c, wiersz - 1 , kolumna -1));
        }
    }


    return det;
}

bool matrixIsDiagonal(double **a, int wiersz, int kolumna){
    bool diagonal=1;

    for(int i=0;i<wiersz;i++)
    {
        for(int j=0;j<kolumna;j++)
        {
            if(i!=j && a[i][j]!=0)
            {
                diagonal=0;
                break;
            }
        }
    }
    return diagonal;
}

void swap(double &a, double &b){
    double c=a;
    a=b;
    b=c;

}

void sortRow(double a[], int n){
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++)
    {
        swapped = false;
        for (j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
                swapped = true;
            }
        }

        // IF no two elements were swapped by inner loop, then break
        if (swapped == false)
            break;
    }
}

void sortRowsInMatrix(double **a, int wiersz, int kolumna){
    for(int i=0; i<wiersz; i++){
        sortRow(a[i],kolumna);
    }
}


void help(){

cout << "\n\nMatrixApp JIPP2\n"
        "\n"
        "Dzialanie programu:\n"
        "Program przyjmuje nazwe funkcjonalnosci jako parametr\n"
        "Nastepnie wczytuje macierz/tablicei dokonuje obliczen\n"
        "Na koncu program wyswietla wynik dzialania\n"
        "\n"
        "Wczytywanie macierzy:\n"
        "Okreslenie typu macierzy: 1-int 0-double\n"
        "Podanie ilosci wierszy\n"
        "Podanie ilosci kolumn\n"
        "Podanie elementow macierzy(wierszami) - rozdzielone spacja lub enter\n"
        "\n"
        "Wczytywanie tablicy:\n"
        "Podanie ilosci kolumn(ilosc elementow tablicy)\n"
        "Podanie wartosci elementow tablicy\n"
        "\n"
        "Dzialania:\n"
        "addMatrix - Dodawanie dwoch macierzy\n"
        "Program wczytuje 2 macierze i dodaje je do siebie\n"
        "\n"
        "subtractMatrix - Odejmowanie macierzy\n"
        "Program wczytuje 2 macierze i odemuje jedna od drugiej\n"
        "Odejmowana macierz podawana jest jako druga\n"
        "\n"
        "multiplyMatrix - Mnozenie dwoch macierzy\n"
        "Program wczytuje ilosc kolumn i wierszy jednej macierzy oraz ilosc kolumn drugiej\n"
        "Ilosc wierszy drugiej macierzy musi byc rowna ilosci kolumn 1 macierzy wiec nie jest ponownie wczytywana\n"
        "Program mnozy obie macierze\n"
        "\n"
        "multiplyByScalar - Mnozenie macierzy przez skalar\n"
        "Program wczytuje macierz oraz skalar, ktorego typ jest taki sam jak macierzy\n"
        "\n"
        "transpozeMatrix - Transponowanie macierzy\n"
        "Program wczytuje jedna macierz a nastepnie transponuje ja\n"
        "\n"
        "powerMatrix - Podnoszenie macierzy do potegi\n"
        "Program wczytuje jedna macierz\n"
        "Jako drugi parametr przyjmowana jets wartosc potegi\n"
        "Program podnosi macierz do potegi\n"
        "\n"
        "determinantMatrix - Znalezienie wyznacznika macierzy\n"
        "Program wczytuje jedna macierz, a nastepnie podaje jej wyznacznik\n"
        "\n"
        "matrixIsDiagonal - Sprawdzenie czy macierz jest diagonalna\n"
        "Program wczytuje jedna macierz a nastepnie sprawdza czy jest diagonalna\n"
        "Jako wynik podaje wartosc bool:\n"
        "1 - macierz diagonalna\n"
        "0 - macierz nie jest diagonalna\n"
        "\n"
        "swap - Zamiana wartosci w macierzy\n"
        "Program przyjmuje wartosci z dwoch komorek macierzy a nastepnie zamienia je miejscami\n"
        "Jako wynik wyswietla macierz z zamienionymi wartosciami\n"
        "\n"
        "sortRow - Sortowanie elementow tablicy\n"
        "Program wczytuje jedna tablice a nastepnie sortuje jej elementy za pomoca bubblesort\n"
        "Jako wynik wyswietla posortowana tablice\n"
        "\n"
        "sortRowsInMatrix - Sortowanie elementow w wierszach macierzy\n"
        "Program wczytuje jedna macierz a nastepnie sortuje elementyw kazdym jej wierszu\n"
        "Jako wynik wyswietla macierz z posortowanymi wierszami\n"
        "\n"
        "\n";

}