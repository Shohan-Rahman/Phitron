#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node* Next;
    Node(int value)
    {
        this->value = value;
        this->Next = NULL;
    }
};
class myQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->Next = newNode;
        tail = tail->Next;
    }
    void pop()
    {
        sz--;
        Node* deleteNode = head;
        head = head->Next;
        delete deleteNode;
        if(head == NULL)
        {
            tail->Next = NULL;
        }
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz == 0) return true;
        else return false;
    }
};
int main()
{
    myQueue q;
    int x;
    cin >> x;
    for(int i=0;i<x;i++)
    {
        int v;
        cin >> v;
        q.push(v);
    }
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}