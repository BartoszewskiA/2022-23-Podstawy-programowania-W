#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int tablica[256];

bool statystyka(string n);
void wypisz(int a = 0, int b = 255);
bool walidacja(string s);

int main()
{
    string nazwa;

    do
    {
        cout << "Podaj nazwe pliku (*.txt): ";
        getline(cin, nazwa);
    } while (!walidacja(nazwa));
    if (!statystyka(nazwa))
    {
        cout << "blad pliku";
        return 0;
    }
    wypisz(28, 128);
    return 0;
}

bool statystyka(string n)
{
    fstream plik;
    string temp;
    for (int i = 0; i < 256; i++)
        tablica[i] = 0; // wyzerowanie tablicy
    plik.open(n, ios::in);
    if (!plik.good())
    {
        return false;
    }
    while (!plik.eof())
    {
        getline(plik, temp);
        for (int i = 0; i < temp.length(); i++)
            tablica[(int)temp[i]]++;
        // (int)temp[i] - numer znaku o indeksie i w łańcuchu
    }
    plik.close();
    return true;
}

void wypisz(int a, int b)
{
    if (!(a >= 0 && a < 256 && b >= 0 && b < 256 && a < b))
    {
        cout << "zly zakres";
        return;
    }
    for (int i = a; i <= b; i++)
        cout << (char)i << "[" << tablica[i] << "]\t";
}

bool walidacja(string s)
{
    // test 1 - dlugosc
    if (s.length() < 5)
        return false;
    // test 2 - czy wystepuje ".txt" na koncu lancucha
    if (s.substr(s.length() - 4, 4) != ".txt")
        return false;

    // wszystkie testy przebiegly poprawnie
    return true;
}