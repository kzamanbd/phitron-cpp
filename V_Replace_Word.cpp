#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    string r = "EGYPT";

    while (s.find(r) != -1)
    {
        s.replace(s.find(r), r.size(), " ");
    }

    cout << s;

    return 0;
}