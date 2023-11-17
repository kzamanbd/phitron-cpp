#include <iostream>
#include <limits.h>

using namespace std;

int main()
{

    int a, k, n;
    cin >> n >> k >> a;

    long long d = (k * n) / a;

    double q = d, test = q - d;

    if (test > 0)
    {
        cout << "double";
    }
    else if (q > INT_MAX)
    {
        printf("long long");
    }
    else
    {
        cout << "int";
    }
    return 0;
}