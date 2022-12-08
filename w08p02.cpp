#include <iostream>
#include <string>

using namespace std;
string normalizacja(string s);

int main()
{
    string miasto;
    cout << "Podaj nazwe miata: ";
    getline(cin, miasto);
    miasto = normalizacja(miasto);
    cout << "[" << miasto << "]";
    return 0;
}

string normalizacja(string s)
{
    // usuwamy spacje na poczatku
    while (s[0] == ' ')
    {
        s.erase(0, 1);
    }
    // usuwamy spacje na koncu
    while (s[s.length() - 1] == ' ')
    {
        s.erase(s.length() - 1, 1);
    }
    // zamiana na małe litery
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    // zamiana pierwszej litery na duza
    s[0] = toupper(s[0]);
    // duza litera po spacji
    int poz_sp = s.find(' ');
    if (poz_sp > 0)
        s[poz_sp + 1] = toupper(s[poz_sp + 1]);
    // myslniki
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '-')
            s[i] = ' ';
    return s;
}