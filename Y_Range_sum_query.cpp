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
        int x, y;
        cin >> x >> y;
        int sum = 0;
        for (auto it = v.begin() + x - 1; it < v.begin() + y; it++)
        {
            sum += *it;
        }
        cout << sum << endl;
    }

    return 0;
}