#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string s;
    plik.open("wynik.txt", ios::app);
    while (1)
    {
        cout << ": ";
        getline(cin, s);
        if (s.length() == 0)
            break;
        plik << s << endl;
    }
    plik.close();
    return 0;
}