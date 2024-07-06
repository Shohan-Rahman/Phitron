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
void search_item(Node* &head,int val)
{
    Node* tmp = head;
    bool flag = false;
    int pos = 0;
    for(Node* i=tmp;i!=NULL;i=i->Next)
    {
        if(i->value == val)
        {
            flag = true;
            break;
        }
        pos++;
        tmp = tmp->Next;
    }
    if(flag == true)
    {
        cout << pos << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
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
        int val;
        cin >> val;
        search_item(head,val);
    }
    return 0;
}