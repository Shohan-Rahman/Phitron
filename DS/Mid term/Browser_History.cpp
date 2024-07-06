#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string s;
    Node* next;
    Node* prev;

    Node(string s)
    {
        this->s=s;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertNode(string &homepage,Node* &head,Node* &cur) 
{
    Node* newNode = new Node(homepage);
    if(head == NULL) 
    {
        head = newNode;
        cur = head;
    } 
    cur->next = newNode;
    newNode->prev = cur;
    cur = newNode;
    head->prev = NULL;
}
void visit(string &b,Node* head,Node* &cur) 
{
    Node* tmp = head;
    while(tmp!=NULL) 
    {
        if(tmp->s == b) 
        {
            cur = tmp;
            cout << cur->s << endl;
            return;
        }
        else
        {
            tmp = tmp->next;
        }
    }
    cout << "Not Available" << endl;
}
void next(Node* &cur) 
{
    if(cur!=NULL && cur->next!=NULL) 
    {
        cur = cur->next;
        cout << cur->s << endl;
    } 
    else
    {
        cout << "Not Available" << endl;
    }
}
void prev(Node* &cur) 
{
    if(cur!=NULL && cur->prev!=NULL) 
    {
        cur = cur->prev;
        cout << cur->s << endl;
    } 
    else 
    {
        cout << "Not Available" << endl;
    }
}

int main() 
{
    Node* head = NULL;
    Node* cur = NULL;
    string homepage;
    while(true)
    {
        cin >> homepage;
        if(homepage == "end")
        {
            break;
        }
        insertNode(homepage,head,cur);
    }
    int q;
    cin >> q;
    string a;
    while(q--) 
    {
        cin >> a;
        if(a == "visit") 
        {
          string cur1;
          cin >> cur1;
          visit(cur1,head,cur);
        }
        else if(a == "next") 
        {
            next(cur);
        } 
        else if(a == "prev") 
        {
            prev(cur);
        }
    }


    return 0;
}
