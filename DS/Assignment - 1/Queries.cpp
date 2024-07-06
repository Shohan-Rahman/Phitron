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
void head_insert(Node* &head,Node* &tail,int v)
{
    Node* newNode = new Node(v);
    newNode->Next = head;
    head = newNode;
    if(tail == NULL)
    {
        tail = newNode;
        return;
    }
}
void tail_insert(Node* &head,Node* &tail,int v)
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
void delete_head(Node * &head)
{
    Node * deletehead = head;
    head = head->Next;
    delete deletehead;
}
int size_list(Node* head)
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
void delete_position(Node * &head,Node* &tail,int pos)
{
    Node * tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->Next;
    }
    if(tmp->Next->Next == NULL)
    {
        tail = tmp;
    }
    Node * deleteNode = tmp->Next;
    tmp->Next = tmp->Next->Next;
}
void print_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->Next;
    }
    cout << endl;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        if(x==0)
        {
            int v;
            cin >> v;
            head_insert(head,tail,v);
            print_list(head);
        }
        else if(x==1)
        {
            int v;
            cin >> v;
            tail_insert(head,tail,v);
            print_list(head);
        }
        else if(x==2)
        {
            int v;
            cin >> v;
            int s = size_list(head);
            if(head != NULL)
            {
                if(v < s)
                {
                    if(v==0)
                    {
                        delete_head(head);
                    }
                    else
                    {
                        delete_position(head,tail,v);
                    }
                }
            }
            print_list(head);
        }
    }
    return 0;
}