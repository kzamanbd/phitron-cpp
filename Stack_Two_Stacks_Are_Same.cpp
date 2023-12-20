#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    list<int> ll;

    bool empty()
    {
        return ll.empty();
    }

    void push(int x)
    {
        ll.push_back(x);
    }
    void pop()
    {
        ll.pop_back();
    }
    int size()
    {
        return ll.size();
    }
    int top()
    {
        return ll.back();
    }
};

int main()
{
    MyStack s1, s2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s2.push(x);
    }
    int flag = 1;
    if (s1.size() != s2.size())
    {
        flag = 0;
    }
    else
    {
        while (!s1.empty())
        {
            if (s1.top() != s2.top())
            {
                flag = 0;
                break;
            }
            s1.pop();
            s2.pop();
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
    return 0;
}