#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mx)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}