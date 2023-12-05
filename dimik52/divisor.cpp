#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    int caseCount = 1;
    while (test--)
    {
        int x;
        cin >> x;
        cout << "Case " << caseCount << ": ";
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                cout << i;
                if (i != x)
                {
                    cout << " ";
                }
            }
        }
        caseCount++;
        cout << endl;
    }

    return 0;
}