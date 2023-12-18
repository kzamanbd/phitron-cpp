#include <bits/stdc++.h>
using namespace std;

class VStack
{
private:
    vector<int> v;

public:
    VStack() {}
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.size() == 0 ? true : false;
    }
    void pop()
    {
        if (!empty())
        {
            v.pop_back();
        }
    }
    void push(int x)
    {
        v.push_back(x);
    }
    int top()
    {
        return v.back();
    }
};

int main()
{
    VStack *vStack = new VStack();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vStack->push(x);
    }

    for (int i = 0; i < n; i++)
    {
        cout << vStack->top() << endl;
        vStack->pop();
    }
    return 0;
}