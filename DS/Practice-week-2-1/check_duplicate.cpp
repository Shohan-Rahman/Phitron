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
void value_print(Node * head)
{
    bool flag = false;
    for(Node * tmp = head;tmp!=NULL;tmp=tmp->Next)
    {
        for(Node * j=tmp->Next;j!=NULL;j=j->Next)
        {
            if(tmp->value==j->value)
            {
                flag = true;
            }
        }
    }
    if(flag)
    {
        cout << "YES";
    }
    else cout << "NO";
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
    value_print(head);
    return 0;
}