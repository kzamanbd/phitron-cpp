#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class SinglyQueue
{
public:
    ListNode *head = NULL;
    ListNode *tail = NULL;
    int size = 0;

    SinglyQueue() {}

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
    ListNode *front()
    {
        return head;
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

int main()
{
    SinglyQueue *sQueue = new SinglyQueue();
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        sQueue->push(x);
    }

    while (!sQueue->empty())
    {
        cout << sQueue->front()->val << endl;
        sQueue->pop();
    }
    return 0;
}