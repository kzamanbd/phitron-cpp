#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int word, length;
        cin >> word >> length;
        char text[length];
        cin >> text;
        int minCount = INT_MAX;
        for (int w = 0; w < word - 1; w++)
        {
            int count = 0;
            char i_text[length];
            cin >> i_text;

            for (int i = 0; i < length; i++)
            {
                int diff = abs(text[i] - i_text[i]);
                count += diff;
            }
            if (minCount > count)
            {
                minCount = count;
            }
        }
        cout << minCount << endl;
    }
    return 0;
}