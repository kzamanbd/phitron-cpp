#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int x, y;
    cin >> x >> y;

    if ((x == 0 && y == 0) || abs(x - y) >= 2)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}