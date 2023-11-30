#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    vector<int> count(26, 0);
    while (cin >> x)
    {
        count[int(x - 97)]++;
    }

    for (int i = 0; i < count.size(); i++)
    {
        if (count[i] > 0)
        {
            cout << char(i + 97) << " : " << count[i] << endl;
        }
    }

    return 0;
}