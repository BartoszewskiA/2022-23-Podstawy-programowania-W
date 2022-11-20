#include <iostream>

using namespace std;

double srednia(double a, double b);
int srednia(int a, int b);
double srednia(double a, double b, double c);

int main()
{
    cout << srednia(4, 7) << endl;
    cout << srednia(4.0, (double)7);

    return 0;
}

double srednia(double a, double b)
{
    return (a + b) / 2;
}

int srednia(int a, int b)
{
    return (a + b) / 2;
}

double srednia(double a, double b, double c)
{
    return (a + b + c) / 3;
}