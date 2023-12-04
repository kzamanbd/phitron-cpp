#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n, q;
    cin >> n >> q;
    long long int v[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i != 0)
        {
            v[i] += v[i - 1];
        }
    }

    while (q--)
    {
        long long int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long int sum = 0;
        if (l == 0)
        {
            sum = v[r];
        }
        else
        {
            sum = v[r] - v[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}