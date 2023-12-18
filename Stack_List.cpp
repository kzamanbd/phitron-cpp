#include <bits/stdc++.h>
using namespace std;

class LStack
{
private:
    list<int> sList;

public:
    LStack() {}
    int size()
    {
        return sList.size();
    }
    bool empty()
    {
        return sList.size() == 0 ? true : false;
    }
    void pop()
    {
        if (!empty())
        {
            sList.pop_back();
        }
    }
    void push(int x)
    {
        sList.push_back(x);
    }
    int top()
    {
        return sList.back();
    }
};

int main()
{
    LStack *lStack = new LStack();
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        lStack->push(x);
    }

    while (!lStack->empty())
    {
        cout << lStack->top() << endl;
        lStack->pop();
    }
    return 0;
}