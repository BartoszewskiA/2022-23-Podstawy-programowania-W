#include <iostream>

using namespace std;

int main()
{
int tab[10] = {0,1,2,3,4,5,6,7,8,9};
    // tab[9]=100;
    for (int i=9; i>=0; i--)
    {
        cout<<tab[i]<<" ";
    }
    return 0;
}