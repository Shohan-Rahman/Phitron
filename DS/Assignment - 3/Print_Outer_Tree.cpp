#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node* left;
    Node* right;
    
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_take()
{
    int v;
    cin >> v;
    Node* root;
    if(v==-1)
    {
        root = NULL;
    }
    else
    {
       root = new Node(v);
    }
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if(l==-1) 
        myLeft = NULL;
        else 
        myLeft = new Node(l);
        if(r==-1) 
        myRight = NULL;
        else 
        myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left)
        q.push(p->left);
        if(p->right)
        q.push(p->right);
    }
    return root;
}
void left_value(Node* root)
{
    if(root == NULL) return;
    if(root->left)
    {
        left_value(root->left);
        cout << root->left->value << " ";
    }
    else if(root->right)
    {
        left_value(root->right);
        cout << root->right->value << " ";
    }
}
void right_value(Node* root)
{
    if(root == NULL) return;
    if(root->right)
    {
        cout << root->right->value << " ";
        right_value(root->right);
    }
    else if(root->left)
    {
        cout << root->left->value << " ";
        right_value(root->left);
    }
}
int main()
{
    Node* root = input_take();
    if(root->left) left_value(root);
    cout << root->value << " ";
    if(root->right) right_value(root);
    return 0;
}