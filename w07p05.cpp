#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik_1, plik_2;
    string nazwa_1, nazwa_2, s;
    cout << "Podaj nazwę pliku zrodlowego: ";
    getline(cin, nazwa_1);
    cout << "Podaj nazwę pliku docelowego: ";
    getline(cin, nazwa_2);
    plik_1.open(nazwa_1, ios::in);
    plik_2.open(nazwa_2, ios::out);
    if (!plik_1.good() || !plik_2.good())
    {
        cout << "Blad pliku";
        return 0;
    }
    while (!plik_1.eof())
    {
        getline(plik_1, s);
        plik_2 << s << endl;
    }
    plik_1.close();
    plik_2.close();
    return 0;
}