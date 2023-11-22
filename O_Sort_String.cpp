#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count[26] = {0};

    for (int i = 0; i < n; i++)
    {
        char str;
        cin >> str;
        count[int(str) - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            cout << char(i + 97);
        }
    }
    return 0;
}