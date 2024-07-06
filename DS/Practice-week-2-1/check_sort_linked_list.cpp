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
    while(tmp->Next!=NULL)
    {
        tmp = tmp->Next;
    }
    tmp->Next = newNode;
}
void print_sort(Node * head)
{
    Node * tmp = head;
    bool flag = false;
    // for(Node * tmp = head;tmp!=NULL;tmp=tmp->Next)
    //     {
    //     for(Node * j = tmp->Next;j!=NULL;j = j->Next)
    //     {
    //         if(tmp->value > j->value)
    //         {
    //             flag = true;
    //         }
    //     }
    // }
    while(tmp->Next!=NULL)
    {

        if(tmp->value > tmp->Next->value)
        {
            flag = true;
            break;
        }
        tmp = tmp->Next;
    }
    if(flag == true)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES"<< endl;
    }
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
    print_sort(head);
    return 0;
}