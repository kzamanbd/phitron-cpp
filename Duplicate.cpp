#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1] && i + 1 < n)
        {
            flag = 1;
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
    return 0;
}