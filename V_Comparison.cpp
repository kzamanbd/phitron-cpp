#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x, y;
    char sign;
    cin >> x >> sign >> y;

    if (sign == '>' && x > y)
    {
        cout << "Right";
    }
    else if (sign == '<' && x < y)
    {
        cout << "Right";
    }
    else if (sign == '=' && x == y)
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }

    return 0;
}