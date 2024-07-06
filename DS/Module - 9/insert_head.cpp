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
void insert_head(Node* &head,int v)
{
    Node* newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->Next = head;
    head->prev = newNode;

    head = newNode;
}
void insert_at_any_position(Node* &head,int pos,int v)
{
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->Next;
    }
    newNode->Next = tmp->Next;
    tmp->Next = newNode;
    newNode->prev = tmp;
    newNode->Next->prev = newNode;
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
int size_dubly(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp = tmp->Next;
    }
    return cnt;
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->Next = a;
    a->prev = head;
    
    a->Next = b;
    b->prev = a;

    b->Next = c;
    c->prev = b;

    Node* tail = c;

    int pos,v;
    cin >> pos >> v;
    if(pos == 0)
    {
        insert_head(head,v);
    }
    else if(pos>=size_dubly(head))
    {
        cout << "INVALID POSITION" << endl;
    }
    else
    {
        insert_at_any_position(head,pos,v);
    }
        print_normal(head);
        print_reverse(tail);
    return 0;
}