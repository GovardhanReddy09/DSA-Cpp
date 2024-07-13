#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};

class Tree
{
    public:
    
    Node *root =NULL;
    
    Node *create_node_and_insert(Node *root,int val)
    {
        if(root==NULL)
            return new Node(val);
        else if(val < root->data)
            root->left=create_node_and_insert(root->left, val);
        else
            root->right=create_node_and_insert(root->right, val);
            
        return root;
    }
    
    void insert(int val)
    {
        root=create_node_and_insert(root, val);
    }
    
    void post()
    {
        post_order(root);
    }
    void pre()
    {
        pre_order(root);
    }
    void in()
    {
        in_order(root);
    }
    void post_order(Node *root)
    {
        if(root==NULL)
        {
            return;
        }
        post_order(root->left);
        post_order(root->right);
        cout<<root->data<<" -> ";
        return;
    }
    void in_order(Node *root)
    {
        if(root==NULL)
        {
            return;
        }
        in_order(root->left);
        cout<<root->data<<" -> ";
        in_order(root->right);
        return;
    }
    void pre_order(Node *root)
    {
        if(root==NULL)
        {
            return;
        }
        cout<<root->data<<" -> ";
        pre_order(root->left);
        pre_order(root->right);
        return;
    }
    int findheight(Node *root)
    {
        if(root==NULL)
        {
            return -1;
        }
        int Lst=findheight(root->right);
        int Rst=findheight(root->left);
        if(Lst>=Rst)
        {
            return Lst+1;
        }
        else
        return Rst+1;
    }
    void height()
    {
        cout<<findheight(root)<<endl;
    }
};
int main() {
    /*Node *root=new Node(11);
    
    root->left=new Node(20);
    root->right=new Node(8);
    
    root->left->left=new Node(2);
    root->left->right=new Node(7);
    
    root->right->left=new Node(6);
    root->right->right=new Node(15);
    
    Tree myObj;
    cout<<"PreOrder:"<<endl;
    myObj.pre_order(root);
    cout<<endl;
    cout<<"IN Order:"<<endl;
    myObj.in_order(root);
    cout<<endl;
    cout<<"Post Order:"<<endl;
    myObj.post_order(root); */
    
    
    Tree BST;
    /*BST.insert(3);
    BST.insert(2);
    BST.insert(4);
    BST.insert(1);
    BST.insert(5);
    //BST.insert(7);
    //BST.insert(17);
    
    BST.height();*/
    /*BST.post();
    cout<<endl;
    BST.pre();
    cout<<endl;
    BST.in();*/
    int t;
    cin>>t;
    while(t--)
    {
        Tree BST;
        int n,a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            BST.insert(a);
        }
        BST.height();
    }
}
