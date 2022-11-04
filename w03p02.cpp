#include <iostream>

using namespace std;

int main()
{
    int znak;
    for (int i = 0; i < 256; i++)
        cout << i << "-" << (char)i << "\t";
    return 0;
}