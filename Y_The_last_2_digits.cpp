#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int a, b, c, d, result = 0;
    cin >> a >> b >> c >> d;
    result = (a % 100) * (b % 100) * (c % 100) * (d % 100);
    if (result % 100 < 10)
    {
        cout << "0" << result % 100;
    }
    else
    {
        cout << result % 100;
    }

    return 0;
}