#include <bits/stdc++.h>
using namespace std;

int main()
{

    int length, groupItem;

    cin >> length >> groupItem;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    int totalGroup = ceil(length * 1.0 / groupItem);

    int start = 0, end = groupItem;

    for (int i = 0; i < totalGroup; i++)
    {
        // cout << start << " " << end << endl;
        int mn = INT_MAX;
        for (int i = start; i < end && i < length; i++)
        {
            mn = min(mn, arr[i]);
        }
        cout << mn << " ";
        start += groupItem;
        end += groupItem;

        if (end > length)
        {
            end = start + (length - start);
        }
    }

    return 0;
}