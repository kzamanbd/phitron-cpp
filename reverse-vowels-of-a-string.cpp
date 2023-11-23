#include <bits/stdc++.h>
using namespace std;

bool isVowels(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return true;
    }
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return true;
    }
    return false;
}

int main()
{

    string s, v;
    cin >> s;

    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (isVowels(s[i]))
        {
            v.push_back(s[i]);
        }
    }
    int j = v.size() - 1;
    for (int i = 0; i < size; i++)
    {
        if (isVowels(s[i]))
        {
            s[i] = v[j--];
        }
    }
    cout << s;
    return 0;
}