#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int x = rand() % 88 + 1;
    cout << "Starosta bedzie: " << x;
    return 0;
}