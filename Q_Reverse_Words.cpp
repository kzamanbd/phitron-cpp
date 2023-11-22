#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str, word;
    getline(cin, str);
    stringstream stream(str);
    stream >> word;
    for (int i = word.size() - 1; i >= 0; i--)
    {
        cout << word[i];
    }
    while (stream >> word)
    {
        cout << " ";
        for (int i = word.size() - 1; i >= 0; i--)
        {
            cout << word[i];
        }
    }
    return 0;
}