#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int x;
        cin >> x;
        int last = x % 10;
        while (x > 9)
        {
            x /= 10;
        }
        cout << "Sum = " << x + last << endl;
    }

    return 0;
}