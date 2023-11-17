#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char str[n];
    cin.getline(str, n);
    int i, j;
    char temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    return 0;
}