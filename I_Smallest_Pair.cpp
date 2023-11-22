#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n;

        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int min = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int x = arr[i] + arr[j] + ((j + 1) - (i + 1));
                if (min > x)
                {
                    min = x;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}