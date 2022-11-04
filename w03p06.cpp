#include <iostream>

using namespace std;

int main()
{
    int x, s = 0;
    do
    {
        cout << "x=";
        cin >> x;
        if (x < 0)
            break;
        s = s + x;
    } while (1);
    cout << "suma=" << s;
    return 0;
}