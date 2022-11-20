#include <iostream>

using namespace std;

void podmien(int t[], int nr, int n_wartosc);
void wypisz(int tab[], int n);

int main()
{
    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int dlugosc = 10;
    wypisz(tab, dlugosc);
    podmien(tab, 3, 100);
    wypisz(tab, dlugosc);
    return 0;
}

void podmien(int t[], int nr, int n_wartosc)
{
    t[nr] = n_wartosc;
}

void wypisz(int tab[], int n)
{
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    cout << endl;
}