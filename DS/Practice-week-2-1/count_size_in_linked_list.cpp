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
void print(Node * head)
{
    int cnt = 0;
    Node * tmp = head;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->Next;
    }
    cout << cnt;
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
    print(head);
    return 0;
}