#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis;
    cout << "Napisz cos: ";
    getline(cin, napis);
    cout << "Jakiego znaku szukasz: ";
    char znak = getchar();
    int poz = napis.find(znak);
    if (poz >= 0)
    {
        cout << "znak " << znak << "wystapil na pozycjach {";
        do
        {
            cout << poz << " ";
            poz = napis.find(znak, poz + 1);
        } while (poz < napis.length());
        cout << "}";
    }
    return 0;
}