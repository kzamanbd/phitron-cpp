#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        int flag = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == x)
            {
                flag = 1;
                break;
            }

            if (arr[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
            // cout << "L: " << l << " Mid: " << mid << " R: " << r << endl;
        }
        if (flag == 1)
        {
            cout << "found";
        }
        else
        {
            cout << "not found";
        }
        cout << endl;
    }

    return 0;
}