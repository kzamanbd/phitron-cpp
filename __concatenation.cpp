#include <bits/stdc++.h>
using namespace std;

long long concatenate(long long a, long long b)
{
    long long x = 10;
    while (b >= x)
    {
        x *= 10;
    }
    return a * x + b;
}
int main()
{
    cout << "After concatenation of 55 and 33  :" << concatenate(55, 33);
}