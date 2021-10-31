//
// Created by cynamon on 24/10/2021.
//

#ifndef PROJEKT1_MATRIXLIB_H
#define PROJEKT1_MATRIXLIB_H
#include <iostream>

using namespace std;
/**
 * Funkcja dodaje dwie macierze
 * @param a - pierwsza macierz
 * @param b - druga macierz
 * @param wiersz - ilosc wierszy obu macierzy
 * @param kolumna - ilosc kolumn obu macierzy
 * @return - zwraca macierz wynikowa dodawania
 */
int **addMatrix(int **a, int **b, int wiersz, int kolumna);
double **addMatrix(double **a, double **b, int wiersz, int kolumna);
/**
 * Funkcja odejmuje dwie macierze
 * @param a - macierz pierwsza
 * @param b - macierz druga (odejmowana)
 * @param wiersz - ilosc wierszy obu macierzy
 * @param kolumna - ilosc kolumn obu macierzy
 * @return - zwraca macierz wynikowa odejmowania
 */
int **subtractMatrix(int **a, int **b, int wiersz, int kolumna);
double **subtractMatrix(double **a, double **b, int wiersz, int kolumna);
/**
 * Funkcja mnozy dwie macierze
 * @param a - macierz pierwsza
 * @param b - macierz druga
 * @param wiersz1 - ilosc wierszy pierwszej macierzy
 * @param kolumna1 - ilosc kolumn pierwszej maciezy (ilosc wierszy drugiej macierzy)
 * @param kolumna2 - ilosc kolumn drugiej macierzy
 * @return - zwaraca macierz wynikowa mnozenia
 */

int **multiplyMatrix(int **a, int **b, int wiersz1, int kolumna1, int kolumna2);
double **multiplyMatrix(double **a, double **b, int wiersz1, int kolumna1, int kolumna2);

/**
 * Funkcja mnozy macierz przez skalar
 * @param a - macierz
 * @param wiersz - ilosc wierszy macierzy
 * @param kolumna - ilosc kolumn macierzy
 * @param skalar - skalar
 * @return - zwraca macierz wynikowa mnozenia macierzy przez skalar
 */
int **multiplyByScalar(int **a, int wiersz, int kolumna, int skalar);
double **multiplyByScalar(double **a, int wiersz, int kolumna, double skalar);

/**
 * Funkcja transponuje macierz
 * @param a - macierz
 * @param wiersz - ilosc wierszy macierzy
 * @param kolumna - ilosc kolumn macierzy
 * @return - zwraca macierz transponowana
 */
int **transpozeMatrix(int **a, int wiersz, int kolumna);
double **transpozeMatrix(double **a, int wiersz, int kolumna);

/**
 * Funkcja podnosi macierz do potegi
 * @param a - macierz
 * @param wiersz - ilosc wierszy macierzy
 * @param kolumna - ilosc kolumn macierzy
 * @param potega - liczba, do potegi ktorej podnoszona jest macierz
 * @return - zwraca macierz podniesiana do potegi
 */
int **powerMatrix(int **a, int wiersz, int kolumna, unsigned potega);
double **powerMatrix(double **a, int wiersz, int kolumna, unsigned potega);
/**
 * Funkcja znajduje wyznacznik macierzy
 * @param a - macierz
 * @param wiersz - ilosc wierszy macierzy
 * @param kolumna - ilosc kolumn macierzy
 * @return - funkcja zwraca wynacznik
 */
int determinantMatrix(int **a, int wiersz, int kolumna);
double determinantMatrix(double **a, int wiersz, int kolumna);
/**
 * Funkcja sprawdza czy macierz jest diagonalna
 * @param a - macierz
 * @param wiersz - ilosc wierszy macierzy
 * @param kolumna - ilosc kolumn macierzy
 * @return - zwraca 0 - macierz nie jest diagonalna lub 1 - macierz jest diagonalna
 */
bool matrixIsDiagonal(int **a, int wiersz, int kolumna);
bool matrixIsDiagonal(double **a, int wiersz, int kolumna);

/**
 * Funkcja zamienia wartosci w macierzy
 * @param a - wartosc 1
 * @param b -wartosc 2
 */
void swap(int &a, int &b);
void swap(double &a, double &b);

/**
 * Funkcja sortuje elementy tablicy
 * @param a - tablica
 * @param kolumna - ilosc kolumn tablicy
 */
void sortRow(int *a, int kolumna);
void sortRow(double *a, int kolumna);
/**
 * Funkcja sortuje wiersze w macierzy
 * @param a - macierz
 * @param wiersz - ilosc wierszy macierzy
 * @param kolumna - ilosc kolumn macierzy
 */
void sortRowsInMatrix(int **a, int wiersz, int kolumna);
void sortRowsInMatrix(double **a, int wiersz, int kolumna);


void help();



#endif //PROJEKT1_MATRIXLIB_H
