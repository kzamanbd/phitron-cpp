#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        string s, r;
        cin >> s >> r;
        while (s.find(r) != -1)
        {
            s.replace(s.find(r), r.size(), "#");
        }
        cout << s << endl;
    }
    return 0;
}