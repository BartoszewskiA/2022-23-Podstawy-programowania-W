#include <iostream>

using namespace std;

int main()
{
    int x, s = 0;
    do
    {
        cout << "x=";
        cin >> x;
        if(x>=0)
            s = s + x;
    } while (x >= 0);
    cout << "suma=" << s;
    return 0;
}