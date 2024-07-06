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
    }
    tail->Next = newNode;
    tail = newNode;
}
int size(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->Next;
    }
    return cnt;
}
void middle_element(Node* head,int s)
{
    int mid = s/2;
    Node * tmp = head;
    if(s%2==0)
    {
        for(int i=1;i<mid;i++)
        {
            tmp = tmp->Next;
        }
        cout << tmp->value << " " << tmp->Next->value;
    }
    else
    {
        for(int i=1;i<=mid;i++)
        {
            tmp = tmp->Next;
        }
        cout << tmp->value;
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
        take_input(head,tail,v);
    }
    int s = size(head);
    middle_element(head,s);
    return 0;
}