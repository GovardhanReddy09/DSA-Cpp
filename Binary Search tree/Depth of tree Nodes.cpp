#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
private:
    Node *root;

    
    Node* insertRecursive(Node *root, int val, int depth) {
        if (root == nullptr) {
            cout << depth << " "; // Print depth when inserting
            return new Node(val);
        }

        if (val < root->data)
            root->left = insertRecursive(root->left, val, depth + 1);
        else
            root->right = insertRecursive(root->right, val, depth + 1);

        return root;
    }

public:
    BST() {
        root = nullptr;
    }

   
    void insert(int val) {
        root = insertRecursive(root, val, 0); 
    }
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> values(N);
        for (int i = 0; i < N; ++i)
            cin >> values[i];

        BST bst;

        for (int i = 0; i < N; ++i) {
            bst.insert(values[i]);
        }

        cout << endl;
    }

    return 0;
}

