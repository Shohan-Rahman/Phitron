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
void insert_tail(Node* &head,Node* &tail,int v)
{
    Node* newNode = new Node(v);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->Next = newNode;
    newNode->prev = tail;
    tail = tail->Next;
}
void pallindrome(Node* &head,Node* &tail)
{
    Node* i = head;
    Node* j = tail;
    bool flag = true;
    while(i != j && i->Next != j)
    {
        if(i->value != j->value)
        {
            flag = false;
        }
        i = i->Next;
        j = j->prev;
    }
    if(i->Next == j)
    {
        if(i->value != j->value)
        {
            flag = false;
        }
    }
    if(flag == false)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int v;
    while(true)
    {
        cin >> v;
        if(v==-1)
        {
            break;
        }
        insert_tail(head,tail,v);
    }
    pallindrome(head,tail);
    return 0;
}