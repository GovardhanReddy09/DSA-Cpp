

#include <iostream>
using namespace std;

class Node{
    public:
       int data;
       Node* left;
       Node* right;
       Node(int data){
           this->data=data;
           this->left=NULL;
           this->right=NULL;
       }
};

class Tree{
    public:
       Node* root=NULL;
       
       Node* insert_node_at_bst(Node* root,int data){
           if(root == NULL){
               Node* newNode=new Node(data);
               return newNode;
           }
           else if(data < root->data){
                root->left=insert_node_at_bst(root->left,data);
           }
           else
                root->right=insert_node_at_bst(root->right,data);
            return root;
       }
       
      void insertNode(int data){
           root=insert_node_at_bst(root,data);
       }
       /*void in(){
           inOrder(root);
       }*/
       
       void pre(){
           preOrder(root);
           cout<<endl;
       }
       
      /* void post(){
           postOrder(root);
       }*/
       
       void deleteNode(int data){
           root=deleteBST(root,data);
       }
       
       Node* deleteBST(Node* root,int key){
           if(!root)  return root;
           
           if(key < root->data){
               root->left=deleteBST(root->left,key);
               return root;
           }
           else if(key > root->data){
               root->right=deleteBST(root->right,key);
               return root;
           }
           
           if(root->left ==NULL){
               Node* temp=root->right;
               delete root;
               return temp;
           }
           else if(root->right == NULL){
               Node* temp=root->left;
               delete root;
               return temp;
           }
           
           Node* curr=root->right;
           while(curr->left != NULL)  
              curr=curr->left;
        
           root->data=curr->data;
           root->right=deleteBST(root->right,curr->data);
           
           return root;
       }
       
       void searchNode(int key) {
           if(searchBST(root,key)){
               cout<<"Yes"<<endl;
           }
           else
               cout<<"No"<<endl;
       }
       
       bool searchBST(Node* root,int key){
           if(root == NULL)
           return false;
           if(root->data == key)
              return true;
            else if(key > root->data)
               return searchBST(root->right,key);
            else
               return searchBST(root->left,key);
            return false;
       }
       
      
       
       void preOrder(Node* root){
           if(root == NULL)
              return;
            cout<<root->data<<" ";
            preOrder(root->left);
            preOrder(root->right);
       }
       
      
       
};

int main()
{
    int t,n,a,q,key;
    cin>>t;
    int i=1;
    while(t--){
        cout<<"Case #"<<i++<<":"<<endl;
        Tree t;
        cin>>q;
        while(q--){
            cin>>n;
            if(n!=4)
              cin>>key;
            if(n==1){
                t.insertNode(key);
            }
            else if(n==2)
               t.deleteNode(key);
            else if(n==3){
                t.searchNode(key);
            }
            else{
                t.pre();
            }
        }
    }

    return 0;
}
//
