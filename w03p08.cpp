#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    if (y == 0)
    {
        cout << "blad danych";
        return 0;
    }
    double w = (double)x / y;
    cout << "wynik=" << w;
    return 0;
}