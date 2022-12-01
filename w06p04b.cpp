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
    for (int i = 0; i < napis.length(); i++)
        if (napis[i] == znak)
            cout << i << " ";
    return 0;
}