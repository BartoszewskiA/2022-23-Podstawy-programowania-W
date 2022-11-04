#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int tab[100][100];
    int n, m, x=0;
    cout << "Podaj liczbe wierszy (max 100): ";
    cin >> n;
    cout << "Podaj liczbe kolumn (max 100): ";
    cin >> m;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
            tab[j][i] = rand() % 9000 + 1000;
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
            cout << tab[j][i] << "\t";
        cout << endl;
    }
    return 0;
}