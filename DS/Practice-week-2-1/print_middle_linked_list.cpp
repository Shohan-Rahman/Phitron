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
    Node * newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node * tmp = head;
    while(tmp->Next != NULL)
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
void mid_value(Node * head,int cnt)
{
    int mid = cnt/2;
    // cout << mid<< endl;
    Node * tmp = head;
    if(cnt%2==0)
    {
        for(int i=1;i<mid;i++)
        {
            tmp = tmp->Next;
        }
        cout << tmp->value << " " << tmp->Next->value << endl;
    }
    else
    {
        for(int i=1;i<=mid;i++)
        {
            tmp = tmp->Next;
        }
        cout << tmp->value << endl;
    }
}
int main()
{
    Node * head = NULL;
    int v;
    while(true)
    {
        cin >> v;
        if(v == -1)
        {
            break;
        }
        take_input(head,v);
    }
    int s = size(head);
    mid_value(head,s);
    return 0;
}