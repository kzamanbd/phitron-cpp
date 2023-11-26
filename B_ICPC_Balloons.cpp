#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        char str[n];
        int count[26] = {0};
        for (int i = 0; i < n; i++)
        {
            char s;
            cin >> s;
            int index = s - 'A';
            count[index]++;
        }
        int sum = 0;
        for (int i = 0; i < 26; i++)
        {
            if (count[i] > 1)
            {
                sum += (count[i] - 1) + 2;
            }
            else if (count[i] == 1)
            {
                sum += 2;
            }
        }
        cout << sum << endl;
    }
    return 0;
}