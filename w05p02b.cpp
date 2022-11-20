#include <iostream>

using namespace std;

    int tab[10];
    int tab_2[20];
    int dlugosc = 10;
    int dlugosc_2 = 20;

void wypisz();

int main()
{
    wypisz();
    return 0;
}

void wypisz()
{
    for (int i = 0; i < dlugosc; i++)
        cout << tab[i] << " ";
    cout << endl;
}

void wypisz_2()
{
    for (int i = 0; i < dlugosc_2; i++)
        cout << tab_2[i] << " ";
    cout << endl;
}