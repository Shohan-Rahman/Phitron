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

    print_normal(head);
    print_reverse(tail);
    return 0;
}