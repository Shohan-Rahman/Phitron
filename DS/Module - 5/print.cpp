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
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(11);

    head->Next = a;
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->Next;
    }
    return 0;
}