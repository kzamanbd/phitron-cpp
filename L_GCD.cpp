#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num1, num2;
    cin >> num1 >> num2;
    int gcd = INT_MIN;
    for (int i = 1; i <= num1; i++)
    {
        for (int j = 1; j <= num2; j++)
        {
            if ((num1 % i == 0 && num2 % i == 0))
            {
                if (gcd < i)
                {
                    gcd = i;
                }
            }
        }
    }
    cout << gcd;
    return 0;
}