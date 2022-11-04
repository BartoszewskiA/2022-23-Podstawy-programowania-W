#include <iostream>

using namespace std;

int main()
{
    const int DLUGOSC = 100;
    int n;
    cout << "ile liczb wczytac? ";
    cin >> n;
    int tab[DLUGOSC] ={0};
    for (int i = 0; i < n; i++)
    {
        cout << "x=";
        cin >> tab[i];
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
        cout << tab[i] << " ";

    return 0;
}