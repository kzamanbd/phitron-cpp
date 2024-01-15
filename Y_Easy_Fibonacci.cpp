#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int arr[x + 5];
    arr[1] = 0;
    arr[2] = 1;
    for (int i = 1; i <= x; i++)
    {
        if (i == 1 || i == 2)
        {
            cout << arr[i] << " ";
        }
        else
        {
            arr[i] = arr[i - 1] + arr[i - 2];
            cout << arr[i] << " ";
        }
    }
}