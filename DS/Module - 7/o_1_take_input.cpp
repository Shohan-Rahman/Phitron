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
void take_input(Node * &head,Node *&tail,int v)
{
    Node * newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->Next = newNode;
    tail = newNode;
}
void print_link_list(Node * head)
{
    Node  * tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->Next;
    }
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
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
    print_link_list(head);
    return 0;
}