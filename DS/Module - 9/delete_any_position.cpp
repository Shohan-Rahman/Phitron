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
void delete_head(Node* &head)
{
    Node* dl_head = head;
    head = head->Next;
    delete dl_head;
    head->prev = NULL;
}
void delete_any_position(Node* head,int pos)
{
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->Next;
    }
    Node* deleteNode = tmp->Next;
    tmp->Next = tmp->Next->Next;
    tmp->Next->prev = tmp;
    delete deleteNode;
}
void delete_tail(Node* &tail)
{
    Node* delete_tail = tail;
    tail = tail->prev;
    delete delete_tail;
    tail->Next = NULL;

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

    int pos;
    cin >> pos;
    if(pos>size_dubly(head))
    {
        cout << "Invalid" << endl;
    }
    else if(pos == 0)
    {
        delete_head(head);
    }
    else if(pos == size_dubly(head))
    {
        delete_tail(tail);
    }
    else
    {
        delete_any_position(head,pos);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}