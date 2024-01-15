#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stk;
    queue<int> que;
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        stk.push(x);
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        que.push(x);
    }

    int flag = 1;
    if (stk.size() == que.size())
    {
        // check stack and queue are same;
        while (!stk.empty())
        {
            if (stk.top() != que.front())
            {
                flag = 0;
            }
            stk.pop();
            que.pop();
        }
    }
    else
    {
        flag = 0;
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}