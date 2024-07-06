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
void sort_desending(Node* head)
{
    Node* tmp = head;
    for(Node* i=tmp;i->Next!=NULL;i=i->Next)
    {
        for(Node* j=i->Next;j!=NULL;j=j->Next)
        {
            if(i->value < j->value)
            {
                swap(i->value,j->value);
            }
        }
    }
}
void print_list(Node* head)
{
    sort_desending(head);
    Node* tmp = head;
    while(tmp!= NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->Next;
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
        take_input(head,tail,v);
    }
    print_list(head);
    return 0;
}