#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("wynik.txt", ios::app);
    plik << endl
         << "tekst zapisany przez program";
    plik.close();
    return 0;
}