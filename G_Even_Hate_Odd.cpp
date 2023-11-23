#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int arr[size];

        int eventCount = 0, oddCount = 0;

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                eventCount++;
            }
            else
            {
                oddCount++;
            }
        }
        // output
        if (size % 2 == 0)
        {
            int required = size / 2;
            int num = abs(eventCount - required);
            cout << num;
        }
        else
        {
            cout << "-1";
        }

        cout << endl;
    }
    return 0;
}