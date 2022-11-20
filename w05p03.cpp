#include <iostream>

using namespace std;

void wypisz(int a=0, int b=0, int c=0, int d=0);

int main()
{
    wypisz(1,2,3,4);
    cout<<endl;
    wypisz(1,2);
    return 0;
}

void wypisz(int a, int b, int c, int d)
{
    cout << a << " " << b << " " << c << " " << d;
}