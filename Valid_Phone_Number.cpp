#include <bits/stdc++.h>
using namespace std;

bool checkProvider(string s)
{
    if (s == "16" || s == "18" || s == "13" || s == "17" || s == "14" || s == "19" || s == "12" || s == "15")
    {
        return true;
    }
    return false;
}

int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        string number;
        cin >> number;
        if (number.size() > 13)
        {
            number = number.substr(number.length() - 14, 14);
            string provider = number.substr(4, 2);
            string countryCode = number.substr(0, 4);
            if (countryCode == "+880" && checkProvider(provider))
            {
                int flag = 1;
                for (int i = 4; i < 13; i++)
                {
                    if (number[i] == '+')
                    {
                        flag = 0;
                    }
                }
                if (flag == 1)
                {

                    cout << "YES";
                }
                else
                {
                    cout << "NO";
                }
            }
            else
            {
                cout << "NO";
            }
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}