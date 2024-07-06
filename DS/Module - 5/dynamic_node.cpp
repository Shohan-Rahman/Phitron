#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node* next;
    Node(int value)
    {
        this->value = value;
    }
};
int main()
{
    Node* head = new Node(10);
    Node* b = new Node(20);
    head->next = b;
    cout << head->value << endl;
    cout << b->value << endl;
    cout << head->next->value << endl;
    return 0;
}