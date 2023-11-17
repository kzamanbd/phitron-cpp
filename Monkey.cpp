#include <bits/stdc++.h>
using namespace std;

int main()
{

    char str[100001];
    while (cin.getline(str, 100001))
    {
        int stringLength = strlen(str);
        sort(str, str + stringLength);

        for (int i = 0; i < stringLength; i++)
        {
            if (str[i] != ' ')
            {
                cout << str[i];
            }
        }
        cout << endl;
    }

    return 0;
}