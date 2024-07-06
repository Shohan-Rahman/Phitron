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
Node* take_input()
{
    int v;
    cin >> v;
    Node* root;
    if(v == -1) root = NULL;
    else root = new Node(v);
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
        if(l==-1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r==-1) myRight = NULL;
        else myRight = new Node(r);
        p->left = myLeft;
        p->right = myRight;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
int max_height(Node* root)
{
    if(root == NULL) return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l,r)+1;
}
// void print(Node* root)
// {
//     if(root == NULL) return;
//     queue<Node*> q;
//     q.push(root);
//     while(!q.empty())
//     {
//         Node* p = q.front();
//         q.pop();
//         cout << p->value << " ";
//         if(p->left) q.push(p->left);
//         if(p->right) q.push(p->right);
//     }
// }
int main()
{
    Node* root = take_input();
    cout << max_height(root) << endl;
    // print(root);
    return 0;
}