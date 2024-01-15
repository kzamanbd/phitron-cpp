#include <bits/stdc++.h>
using namespace std;

string convertBinary(int num)
{
    string bin;
    while (num > 0)
    {
        int mod = num % 2;
        bin += mod + '0';
        num = num / 2;
    }
    return bin;
}

int main()
{
    int testCase;
    cin >> testCase;
    int num;
    while (testCase--)
    {
        cin >> num;
        string bin;
        while (num > 0)
        {
            int mod = num % 2;
            if (mod == 1)
            {
                bin += mod + '0';
            }
            num = num / 2;
        }

        int base = 2;
        int dec = 0;
        int p = bin.size() - 1;
        for (int i = 0; i < bin.size(); i++)
        {
            dec += 1 * pow(base, p);
            p--;
        }

        cout << dec << endl;
    }
    return 0;
}