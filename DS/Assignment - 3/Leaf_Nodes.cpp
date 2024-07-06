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
vector<int> v;
void leaf_print(Node* root)
{
    if(root == NULL) return;
    if(root->left==NULL && root->right == NULL)
    {
        v.push_back(root->value);
    }
    leaf_print(root->left);
    leaf_print(root->right);
}
int main()
{
    Node* root = input_take();
    leaf_print(root);
    sort(v.begin(),v.end(),greater<int>());
    for(int val:v)
    cout << val << " ";
    return 0;
}