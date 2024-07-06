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
void insert_head(Node* &head,Node* &tail,int v)
{
    Node* newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->Next = head;
    head->prev = newNode;
    head = newNode;
}
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
void insert_at_any_position(Node* &head,Node* &tail,int pos,int v)
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
void print_normal(Node* head)
{
    Node* tmp = head;
    cout << "L" << " " << "->" << " ";
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
    cout << "R" << " " << "->" << " ";
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
    int n;
    cin >> n;
    while(n--)
    {
        int pos,v;
        cin >> pos >> v;
        if(pos == 0)
        {
            insert_head(head,tail,v);
            print_normal(head);
            print_reverse(tail);
        }
        else if(pos>size_dubly(head))
        {
            cout << "Invalid" << endl;
        }
        else if(pos == size_dubly(head))
        {
            insert_tail(head,tail,v);
            print_normal(head);
            print_reverse(tail);
        }
        else
        {
            insert_at_any_position(head,tail,pos,v);
            print_normal(head);
            print_reverse(tail);
        }
    }
    return 0;
}