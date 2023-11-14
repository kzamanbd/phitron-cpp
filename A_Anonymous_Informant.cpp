#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n, k;
        cin >> n >> k;
        int v[n];
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }
        k = min(n, k);
        
        int l = n - 1, flag = 1;
        for (int j = 0; j < k; j++)
        {
            if (v[l] > n)
            {
                flag = 0;
                break;
            }
            l = (l + n - v[l]) % n;
        }
        if (flag == 0)
        {
            cout << "No" << endl;
        }
        else
        {

            cout << "Yes" << endl;
        }
    }
    return 0;
}