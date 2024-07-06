#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node* Next;
    Node* prev;
    Node(int value)
    {
        this->value = value;
        this->Next = NULL;
        this->prev = NULL;
    }
};
class myQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    void push(int v)
    {
        sz++;
        Node* newNode = new Node(v);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->Next = newNode;
        newNode->prev = tail;
        tail = tail->Next;
    }
    void pop()
    {
        sz--;
        Node* deleteNode = head;
        head = head->Next;
        if(head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
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