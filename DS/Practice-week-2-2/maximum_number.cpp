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
    }
    tail->Next = newNode;
    tail = newNode;
}
void maximum_value(Node * head)
{
    Node* tmp = head;
    int mx = INT_MIN;
    for(Node* i=tmp;i!=NULL;i=i->Next)
    {
        if(mx < tmp->value)
        {
            swap(mx,tmp->value);
            tmp = tmp->Next;
        }
    }
    cout << mx;
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
    maximum_value(head);
    return 0;
}