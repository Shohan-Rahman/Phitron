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
void sort_list(Node* &head)
{
    Node* tmp = head;
    for(Node* i = tmp;i->Next!=NULL;i=i->Next)
    {
        for(Node* j = i->Next;j!=NULL;j=j->Next)
        {
            if(i->value > j->value)
            {
                swap(i->value,j->value);
            }
        }
    }
}
void print_l(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->value<<" ";
        tmp=tmp->Next;
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
    sort_list(head);
    print_l(head);
    return 0;
}