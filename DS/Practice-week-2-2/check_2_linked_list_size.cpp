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
void take_input(Node* &head1,Node* &tail1,int v1)
{
    Node* newNode = new Node(v1);
    if(head1 == NULL)
    {
        head1 = newNode;
        tail1 = newNode;
    }
    tail1->Next = newNode;
    tail1 = newNode;
}
void take_input2(Node* &head2,Node* &tail2,int v2)
{
    Node* newNode = new Node(v2);
    if(head2 == NULL)
    {
        head2 = newNode;
        tail2 = newNode;
    }
    tail2->Next = newNode;
    tail2 = newNode;
}
void size(Node* head1,Node* head2)
{
    int count1 = 0;
    int count2 = 0;
    Node* tmp1 = head1;
    Node* tmp2 = head2;
    while(tmp1 != NULL)
    {
        count1++;
        tmp1=tmp1->Next;
    }
    while(tmp2 != NULL)
    {
        count2++;
        tmp2=tmp2->Next;
    }
    if(count1 == count2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
// void print1(Node* head1,Node* head2)           //print 2 linked list
// {
//     Node* tmp1 = head1;
//     while(tmp1!=NULL)
//     {
//         cout<<tmp1->value<<" ";
//         tmp1=tmp1->Next;
//     }
//     cout<<endl;
//     Node* tmp2 = head2;
//     while(tmp2!=NULL)
//     {
//         cout<<tmp2->value<<" ";
//         tmp2=tmp2->Next;
//     }

// }
int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int v1,v2;
    while(true)
    {
        cin >> v1;
        if(v1==-1)
        {
            break;
        }
        take_input(head1,tail1,v1);
    }
    while(true)
    {
        cin >> v2;
        if(v2==-1)
        {
            break;
        }
        take_input2(head2,tail2,v2);
    }
    size(head1,head2);
    // print1(head1,head2);
    return 0;
}