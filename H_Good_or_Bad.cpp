#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        if (s.find("010") != -1 || s.find("101") != -1)
        {
            cout << "Good";
        }
        else
        {

            cout << "Bad";
        }
        cout << endl;
    }
    return 0;
}