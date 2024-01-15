#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        string num;
        cin >> num;

        int sum = 0;
        // Sum the digits of the number
        for (char digit : num)
        {
            sum += (digit - '0');
        }
        if (sum % 3 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
