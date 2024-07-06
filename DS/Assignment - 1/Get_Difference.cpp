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
void take_input(Node* &head,Node* &tail,int v)
{
    Node* newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->Next = newNode;
    tail = newNode;
}
int maximum_value(Node * head)
{
    Node* tmp = head;
    int mx = INT_MIN;
    while(tmp!=NULL)
    {
        if(mx < tmp->value)
        {
            mx=tmp->value;
        }
        tmp = tmp->Next;
    }
    return mx;
}
int minimum_value(Node * head)
{
    Node* tmp = head;
    int mn = INT_MAX;
    while(tmp!=NULL)
    {
        if(mn > tmp->value)
        {
            mn=tmp->value;
        }
        tmp=tmp->Next;
    }
    return mn;
}
int main()
{
    Node * head = NULL;
    Node* tail = NULL;
    int v;
    while(true)
    {
        cin >> v;
        if(v==-1)
        {
            break;
        }
        take_input(head,tail,v);
    }
    int a = maximum_value(head);
    int b = minimum_value(head);
    int dif = a - b;
    cout << dif;
    return 0;
}