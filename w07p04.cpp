#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string nazwa, s;
    cout<<"Podaj nazwę pliku: ";
    getline(cin,nazwa);
    plik.open(nazwa, ios::in);
    if(!plik.good())
    {
        cout<<"Blad pliku";
        return 0;
    }
    while(!plik.eof())
    {
        getline(plik,s);
        cout<<s<<endl;
    }
    plik.close();
    return 0;
}