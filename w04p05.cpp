#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int tab[50];
    int wylosowana;
    for (int i = 0; i < 50; i++)
        tab[i] = 1;
    for (int i = 0; i < 6; i++)
    {
        do
        {
            wylosowana = rand() % 49 + 1;
        } while (tab[wylosowana] == 0);
        tab[wylosowana]=0;
        cout << wylosowana << "\t";
    }
    return 0;
}