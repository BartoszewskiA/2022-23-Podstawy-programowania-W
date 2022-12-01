#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis;
    cout << "Napisz cos: ";
    getline(cin, napis);
    cout<<"Jakiego znaku szukasz: ";
    char znak = getchar();
    int pozycja = napis.find(znak);
    cout <<pozycja;
    return 0;
}