#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;
    cin.ignore();
    while (testCase--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        int count = 0;
        while (ss >> word)
        {
            count++;
        }
        cout << count;
        if (testCase > 0)
        {
            cout << endl;
        }
    }
    return 0;
}