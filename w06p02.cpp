#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis;
    cout << "Napisz cos: ";
    // cin >> napis;
    getline(cin, napis);
    for (int i = 0; i < napis.length(); i++)
        cout << napis[i] << "*";
    cout << endl;
    for (int i = napis.length()-1; i >= 0; i--)
        cout << napis[i];
    return 0;
}