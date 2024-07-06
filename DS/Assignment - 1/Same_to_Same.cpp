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
void take_input1(Node* &head1,Node* &tail1,int v1)
{
    Node* newNode = new Node(v1);
    if(head1 == NULL)
    {
        head1 = newNode;
        tail1 = newNode;
        return;
    }
    tail1->Next = newNode;
    tail1 = newNode;
}
int size(Node* head)
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
int size1(Node* head1)
{
    Node* tmp1 = head1;
    int cnt1 = 0;
    while(tmp1!=NULL)
    {
        cnt1++;
        tmp1 = tmp1->Next;
    }
    return cnt1;
}
void check_same(Node* &head,Node* &head1)
{
    Node* tmp = head;
    Node* tmp1 = head1;
    bool flag = true;
    int s = size(head);
    int s1 = size1(head1);
    if(s != s1)
    {
        cout << "NO";
        return;
    }
    else
    {
        while(tmp!=NULL)
        {
            if(tmp->value != tmp1->value)
            {
                flag = false;
            }
            tmp = tmp->Next;
            tmp1 = tmp1->Next;
        }
    }
    if(flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    Node * head = NULL;
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

    Node * head1 = NULL;
    Node* tail1 = NULL;
    int v1;
    while(true)
    {
        cin >> v1;
        if(v1==-1)
        {
            break;
        }
        take_input1(head1,tail1,v1);
    }
    check_same(head,head1);
    return 0;
}