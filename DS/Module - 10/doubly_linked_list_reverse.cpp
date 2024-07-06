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
void print_reverse(Node* head,Node* tail)
{
    Node* i = head;
    Node* j = tail;
    while(i != j && i->Next != j)
    {
        swap(i->value,j->value);
        i = i->Next;
        j = j->prev;
    }
}
void print_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->Next;
    }
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
    print_reverse(head,tail);
    print_list(head);
    return 0;
}