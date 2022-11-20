#include <iostream>

using namespace std;

void wypisz(int tab[], int n);

int main()
{
    int tab[] = {0,1,2,3,4,5,6,7,8,9};
    int tab_2[] = {10,20,30,40};
    int dlugosc = 10;
    int dlugosc_2 = 4;
    wypisz(tab, dlugosc);
    wypisz(tab_2, dlugosc_2);
    return 0;
}

void wypisz(int tab[], int n)
{
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    cout << endl;
}