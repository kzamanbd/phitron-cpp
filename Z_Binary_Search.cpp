#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (find(v.begin(), v.end(), x) == v.end())
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }

    return 0;
}