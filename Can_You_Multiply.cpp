#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        long long int a, b, result;
        cin >> a >> b;
        result = (a % 100) * (b % 100);

        cout << result % 100 << endl;
    }
    return 0;
}