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
vector<int> level_check(Node* root,int x)
{
    vector<int> v;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty())
    {
        pair<Node*,int> p = q.front();
        Node* node = p.first;
        int level = p.second;
        q.pop();
        if(level == x)
        {
            v.push_back(node->value);
        }
        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
    return v;
}
int main()
{
    Node* root = input_take();
    int x;
    cin >> x;
    vector<int> v1 = level_check(root,x);
    if(!v1.empty())
    {
        for(int val:v1)
        cout << val << " ";
    }
    else
    {
        cout << "Invalid";
    }
    return 0;
}