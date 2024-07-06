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
void print_recursion(Node* head)
{
    if(head == NULL) return;
    cout << head->value << " ";
    print_recursion(head->Next);
}
void print_recursive(Node* head)
{
    if(head == NULL) return;
    print_recursive(head->Next);
    cout << head->value << " ";
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
    print_recursion(head);
    print_recursive(head);
    return 0;
}