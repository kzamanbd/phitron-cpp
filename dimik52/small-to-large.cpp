#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    int caseCount = 1;
    while (testCase--)
    {

        cout << "Case " << caseCount << ": ";
        int x, y, z;
        cin >> x >> y >> z;

        int arr[] = {x, y, z};
        sort(arr, arr + 3);
        cout << arr[0] << " " << arr[1] << " " << arr[2];
        caseCount++;
        if (testCase > 0)
        {
            cout << endl;
        }
    }
    return 0;
}