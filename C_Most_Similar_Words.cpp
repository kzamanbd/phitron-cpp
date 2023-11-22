#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int word, length, minCount = INT_MAX;
        cin >> word >> length;
        string str[word];

        for (int w = 0; w < word; w++)
        {
            cin >> str[w];
        }

        for (int i = 0; i < word - 1; i++)
        {
            for (int j = i + 1; j < word; j++)
            {
                int count = 0;
                for (int k = 0; k < length; k++)
                {

                    int diff = abs(str[i][k] - str[j][k]);
                    // cout << diff << endl;
                    count += diff;
                }
                if (minCount > count)
                {
                    minCount = count;
                }
            }
        }
        cout << minCount << endl;
    }
    return 0;
}