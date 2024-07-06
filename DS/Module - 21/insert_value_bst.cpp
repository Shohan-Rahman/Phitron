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
void level_print(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->value << " ";

        if(f->left)
        {
            q.push(f->left);
        }
        if(f->right)
        {
            q.push(f->right);
        }
    }
}
void insert_value(Node* &root,int x)
{
    if(root == NULL)
    {
        root = new Node(x);
        return;
    }
    if(x < root->value)
    {
        if(root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert_value(root->left,x);
        }
    }
    else
    {
        if(root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert_value(root->right,x);
        }
    }
}
int main()
{
    Node* root = input_take();
    int x;
    cin >> x;
    insert_value(root,x);
    level_print(root);
    return 0;
}