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
void insert(Node * &head,int v)
{
    Node * newNode = new Node(v);

    if(head == NULL)        //head khali thakle
    {
        head = newNode;
        return;
    }

    Node * tmp = head;     //insert tail

    while(tmp->Next != NULL)
    {
        tmp = tmp->Next;
    }

    tmp->Next = newNode;
}
void print(Node * head)
{
    cout << "Your linked list: " << endl;
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
    Node* head = NULL;
    while(true)
    {
        cout << "Option 1:Insert at tail: " << endl;
        cout << "Option 2:Print your link list: " << endl;
        cout << "Option 3:Terminate your program: " << endl;
        int op;
        cin >> op;
        if(op==1)
        {
            cout << "Enter your value: ";
            int v;
            cin >> v;
            insert(head,v);
        }
        else if(op==2)
        {
            print(head);
        }
        else if(op==3)
        {
            break;
        }
    }
    return 0;
}