#include <iostream>

using namespace std;

void funkcja_01();
int dodaj(int x, int y);
void zamien(int &x, int &y);

int main()
{
    // funkcja_01();
    int x, y;
    cout << "a=";
    cin >> x;
    cout << "b=";
    cin >> y;
    // cout << dodaj(x, y);
    zamien(x, y);
    cout << "Po zamianie: x=" << x << " y=" << y << endl;
    return 0;
}

void funkcja_01()
{
    cout << "To ja funkcja_01";
    return; // opcjonalnie
}

int dodaj(int x, int y)
{
    return x + y;
}

void zamien(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "W trakcie: x=" << x << " y=" << y << endl;
}
