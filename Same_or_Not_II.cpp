#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyQueue
{
public:
    ListNode *head = NULL, *tail = NULL;
    int size = 0;

    MyQueue() {}

    void push(int x)
    {
        size++;
        ListNode *newNode = new ListNode(x);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    int front()
    {
        return head->val;
    }
    void pop()
    {
        if (head)
        {
            size--;
            head = head->next;
        }
    }
    bool empty()
    {
        return size == 0 ? true : false;
    }
};

class MyStack
{
public:
    ListNode *head = NULL, *tail = NULL;
    int size = 0;

    MyStack() {}

    void push(int x)
    {
        size++;
        ListNode *newNode = new ListNode(x);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        size--;
        if (!empty())
        {
            tail = tail->prev;
        }
        if (tail == NULL)
        {
            head = NULL;
        }
    }
    int top()
    {
        if (!empty())
        {
            return tail->val;
        }
        return -1;
    }
    bool empty()
    {
        return size == 0 ? true : false;
    }
};

int main()
{
    MyStack stk;
    MyQueue que;
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
    if (stk.size == que.size)
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