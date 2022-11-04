#include <iostream>

using namespace std;

int main()
{
    // 0 - kończy wczytywanie dnych
    // liczby ujemne mają być ignorowane
    int x, s = 0;
    do
    {
        cout << "x=";
        cin >> x;
        if (x < 0)
            continue;
        s = s + x;
    } while (x != 0);
    cout << "suma=" << s;
    return 0;
}