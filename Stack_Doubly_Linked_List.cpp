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

class DoublyStack
{
private:
    ListNode *head = NULL, *tail = NULL;

public:
    DoublyStack() {}

    int size = 0;

    bool empty()
    {
        return size == 0 ? true : false;
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
    int top()
    {
        if (!empty())
        {
            return tail->val;
        }
        return -1;
    }
};

int main()
{
    DoublyStack *dStack = new DoublyStack();
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        dStack->push(x);
    }

    while (!dStack->empty())
    {
        cout << dStack->top() << endl;
        dStack->pop();
    }
    return 0;
}