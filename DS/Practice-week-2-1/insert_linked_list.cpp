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
void take_input(Node * &head,int v)
{
    Node* newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->Next!=NULL)
    {
        tmp = tmp->Next;
    }
    tmp->Next = newNode;
}
int size(Node * head)
{
    Node * tmp = head;
    int cnt = 0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp = tmp->Next;
    }
    return cnt;
}
void insert_any_position(Node * &head,int pos,int val)
{
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->Next;
        // if(tmp == NULL)
        // {
        //     cout << "Invalid" << endl;
        // }
    }
    newNode->Next = tmp->Next;
    tmp->Next = newNode;
}
void head_insert(Node * &head,int v)
{
    Node * newNode = new Node(v);
    newNode->Next = head;
    head = newNode;
}
void Print_Linked_List(Node * head)
{
    Node * tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->Next;
    }
    cout << endl;
}
int main()
{
    Node * head = NULL;
    int v;
    while(true)
    {
        cin >> v;
        if(v==-1)
        {
            break;
        }
        take_input(head,v);
    }
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int pos,val;
        cin >> pos >> val;
        if(pos==0)
        {
            head_insert(head,val);
        }
        else if(pos > size(head))
        {
            cout << "Invalid" << endl;
            continue;
        }
        else
        {
            insert_any_position(head,pos,val);
        }
        Print_Linked_List(head);
    }
    return 0;
}