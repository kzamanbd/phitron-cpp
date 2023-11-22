#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    getline(cin, str);
    int count = 0, flag = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (isalpha(str[i]))
        {
            if (flag == 0)
            {
                count++;
                flag = 1;
            }
        }
        else
        {
            flag = 0;
        }
    }
    cout << count;
    return 0;
}