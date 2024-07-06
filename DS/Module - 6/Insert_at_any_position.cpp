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
void Insert_in_tail(Node * &head,int v)        //insert tail
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
    cout << "Your Value is inserted"<< endl;
}
void insert_any_position(Node * head,int pos,int val)      //insert at any position
{
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->Next;
    }
    newNode->Next = tmp->Next;
    tmp->Next = newNode;
}
void Print_Linked_List(Node * head)
{
    cout << "Your Linked List: ";
    Node * tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->Next;
    }
    cout << endl;
}
int main()
{
    Node * head = NULL;
    while(true)
    {
        int op;
        cout << endl <<"Choose your option"<<endl<<endl;
        cout << "Option 1: Insert Your tail Node "<< endl;
        cout << "Option 2: Print Your Linked List "<< endl;
        cout << "Option 3: Insert any position "<< endl;
        cout << "Option 4: Terminate Your Program "<< endl;
        cin >> op;
        if(op==1)
        {
            cout << endl << "Insert Your Value: ";
            int v;
            cin >> v;
            Insert_in_tail(head,v);
        }
        else if(op==2)
        {
            Print_Linked_List(head);
        }
        else if(op==3)
        {
            int pos,val;
            cout << "Enter Your Position: ";
            cin >> pos;
            cout << endl;
            cout << "Enter Your Value: ";
            cin >> val;
            cout << endl;
            insert_any_position(head,pos,val);
        }
        else if(op==4)
        {
            break;
        }
    }
    return 0;
}