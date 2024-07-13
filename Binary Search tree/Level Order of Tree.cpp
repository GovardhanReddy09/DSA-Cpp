#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};
class Tree{
    public:
    Node *root=nullptr;
    Node *createnode_and_insert(Node *root,int val)
    {
        if(root==nullptr)
        return new Node(val);
        else if(val<root->data)
        root->left=createnode_and_insert(root->left,val);
        else if(val>root->data)
        root->right=createnode_and_insert(root->right,val);
        return root;
    }
    void insert(int val)
    {
        root=createnode_and_insert(root,val);
    }
    void lot(Node* root)
    {
        queue<Node*> q;
        if(root!=nullptr)
        q.push(root);
        else 
        return;
        while(!q.empty())
        {
            int s=q.size();
            for(int i=1;i<=s;i++){
                Node* node=q.front();
                q.pop();
                cout<<node->data<<" ";
                if(node->left!=nullptr)
                q.push(node->left);
                if(node->right!=nullptr)
                q.push(node->right);
            }
            cout<<endl;
        }
    }
    void order()
    {
        lot(root);
    }
};
int main()
{
    int t;
    cin>>t;
   
    while(t--)
    {
        Tree bst;
        int n;
        cin>>n;
        while(n--)
        {
            int d;
            cin>>d;
            bst.insert(d);
        }
        bst.order();
        cout<<endl;
    }
}//
