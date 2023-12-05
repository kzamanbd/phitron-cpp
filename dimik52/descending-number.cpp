#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tabCount = 0;
    for (int i = 1000; i > 0; i--)
    {
        cout << i << "\t";
        tabCount++;
        if (tabCount == 5)
        {
            cout << endl;
            tabCount = 0;
        }
    }
    return 0;
}