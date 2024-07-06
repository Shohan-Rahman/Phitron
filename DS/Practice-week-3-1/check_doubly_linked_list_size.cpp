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
void insert_tail1(Node* &head,Node* &tail,int v)
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
int size(Node* head)
{
    int cnt = 0;
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->Next;
    }
    return cnt;
}
int size1(Node* head)
{
    int cnt = 0;
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->Next;
    }
    return cnt;
}
void check_value(Node* head,Node* head1)
{
    bool flag = true;
    Node* tmp = head;
    Node* tmp1 = head1;
    while(tmp != NULL)
    {
        if(tmp->value != tmp1->value)
        {
            flag = false;
            break;
        }
        tmp = tmp->Next;
        tmp1 = tmp1->Next;
    }
    if(flag == false)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
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
        insert_tail(head,tail,v);
    }
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int v1;
    while(true)
    {
        cin >> v1;
        if(v1==-1)
        {
            break;
        }
        insert_tail1(head1,tail1,v1);
    }
    if(size(head) == size1(head1))
    {
        check_value(head,head1);
    }
    else
    {
        cout << "NO";
    }
    return 0;
}