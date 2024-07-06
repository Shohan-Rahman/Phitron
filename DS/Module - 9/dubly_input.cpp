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
void print_normal(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->Next;
    }
    cout << endl;
}
void print_reverse(Node* tail)
{
    Node* tmp = tail;
    while(tmp!=NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int v;
    while(true)
    {
        cin >> v;
        if(v == -1) break;
        insert_tail(head,tail,v);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}