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
        // get max nums
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
        }
        int candies = 0;
        for (int i = 0; i < n; i++)
        {
            candies += arr[i] - min;
        }
        cout << candies << endl;
    }
    return 0;
}