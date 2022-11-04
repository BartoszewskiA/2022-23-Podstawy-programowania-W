#include <iostream>

using namespace std;

int main()
{
    int tab[3][2] = {0, 1, 2, 3, 4, 5};
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 2; i++)
            cout << tab[j][i] << "\t";
        cout << endl;
    }
    return 0;
}