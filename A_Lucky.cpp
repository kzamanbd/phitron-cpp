#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        string s;
        cin >> s;
        int firstSum = 0, lastSum = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (i < 3)
            {
                firstSum += s[i] + 48;
            }
            else
            {
                lastSum += s[i] + 48;
            }
        }
        if (firstSum == lastSum)
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