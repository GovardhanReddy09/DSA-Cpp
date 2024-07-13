
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class Tree {
public:
    Node *root = nullptr;

    Node* createNodeAndInsert(Node *root, int val) {
        if (root == nullptr)
            return new Node(val);
        else if (val < root->data)
            root->left = createNodeAndInsert(root->left, val);
        else if (val > root->data)
            root->right = createNodeAndInsert(root->right, val);
        return root;
    }

    void insert(int val) {
        root = createNodeAndInsert(root, val);
    }

    bool isBinarySearchTree(Node* root) {
        if (root == nullptr)
            return true;

        queue<Node*> q;
        q.push(root);
        bool encounteredNull = false;

        while (!q.empty()) {
            
            Node* node = q.front();
            q.pop();

            if (node == nullptr) {
                encounteredNull = true;
            } 
            
            else {
                if (encounteredNull)
                    return false; // A non-null node after encountering a null node
                q.push(node->left);
                q.push(node->right);
            }
        }

        return true;
    }
    
    bool isBinarySearchTree() {
        return isBinarySearchTree(root);
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        Tree bst;
        int n;
        cin >> n;

        while (n--) {
            int d;
            cin >> d;
            bst.insert(d);
        }

        if (bst.isBinarySearchTree()) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }

    return 0;
}
