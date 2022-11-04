#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    bool tab[50];
    int wylosowana;
    for (int i = 0; i < 50; i++)
        tab[i] = true;
    for (int i = 0; i < 6; i++)
    {
        do
        {
            wylosowana = rand() % 49 + 1;
        } while (!tab[wylosowana]);
        tab[wylosowana] = false;
        cout << wylosowana << "\t";
    }
    return 0;
}