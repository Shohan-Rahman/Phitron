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
void remove_duplicate(Node* &head,int v)
{
    Node* tmp = head;
    while(tmp->Next!=NULL)
    {
        if(tmp->Next->value == v)
        {
            Node* deleteNode = tmp->Next;
            tmp->Next = deleteNode->Next;
            delete deleteNode;
        }
        else
        {
            tmp = tmp->Next;
        }
    }
}
void print_list(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->Next;
    }
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
    Node* tmp = head;
    while(tmp != NULL)
    {
        remove_duplicate(tmp,tmp->value);
        tmp = tmp->Next;
    }
    print_list(head);
    return 0;
}