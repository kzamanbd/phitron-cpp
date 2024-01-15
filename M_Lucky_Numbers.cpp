#include <bits/stdc++.h>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;
    bool result = false;
    for (int i = m; i <= n; i++)
    {
        int num = i;
        bool flag = false;
        while (num > 0)
        {
            int last = num % 10;
            if (last != 7 && last != 4)
            {
                flag = true;
            }
            num /= 10;
        }
        if (!flag)
        {
            cout << i << " ";
            result = true;
        }
    }
    if (result == false)
    {
        cout << "-1";
    }
    return 0;
}