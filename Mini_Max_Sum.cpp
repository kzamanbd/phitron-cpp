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

    long long int minSum = 0, maxSum = 0;

    for (int i = 0; i < n; i++)
    {
        long long int sum = 0;

        for (int j = n - 1; j >= 0; j--)
        {
            if (j != i)
            {
                sum += arr[j];
            }
        }
        if (minSum > sum || minSum == 0)
        {
            minSum = sum;
        }

        if (maxSum < sum || maxSum == 0)
        {
            maxSum = sum;
        }
    }
    cout << minSum << " " << maxSum;
    return 0;
}