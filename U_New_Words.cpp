#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    int count = 0;
    string r = "EGYPT";

    while (s.find(r) != -1)
    {
        s.replace(s.find(r), r.size(), "-");
        count++;
    }

    cout << count;
    return 0;
}