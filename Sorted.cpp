#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > v[i + 1] && i + 1 < n)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
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