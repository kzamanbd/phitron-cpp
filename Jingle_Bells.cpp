#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int rows = 5;
    for (int i = 1; i <= n; i += 2)
    {
        rows++;
    }
    // cout << rows;
    for (int i = 1; i <= rows; i++)
    {
        // print space;
        for (int j = i; j <= rows - 1; j++)
        {
            cout << " ";
        }

        // print star;

        for (int j = 0; j < i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}