#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int rows, cols;
        cin >> rows >> cols;
        int arr[rows][cols];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> arr[i][j];
            }
        }
        int sum = arr[0][0] == 0 ? 1 : arr[0][0];
        for (int i = 1; i < rows; i++)
        {
            for (int j = 1; j < cols; j++)
            {
                if (i == j)
                {
                    sum += arr[i][j];
                }
                if (i + j == rows && i != j)
                {
                    sum += arr[i][j];
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}