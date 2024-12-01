#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *left = nullptr;
    Node *right = nullptr;
};

class BinarySearchTree {
    private:
        Node *root = nullptr;
    
    public:
        void insert(int data){
            Node *new_node = new Node();
            new_node->data = data;
            if (root == nullptr){
                root = new_node;
            } else {
                Node *_root = root;
                while(_root){
                    if (_root->data <= data){
                        if (_root->right == nullptr){
                            _root->right = new_node;
                            _root = _root->right;
                        }
                        _root = _root->right;
                    } else {
                        if (_root->left == nullptr){
                            _root->left = new_node;
                            _root = _root->left;
                        }
                        _root = _root->left;
                    }
                }
            }
        }

        void inorder_traversal(){
            Node *_root = root;
            inorder_recursive(_root);
        }

        void inorder_recursive(Node *_root){
            if (_root == nullptr){
                return;
            }
            inorder_recursive(_root->left);   // left
            cout << _root->data << " ";       // head
            inorder_recursive(_root->right);  // right
        }
};

int main(){

    BinarySearchTree bst;
    bst.insert(10);
    bst.insert(0);
    bst.insert(20);
    bst.insert(15);

    bst.inorder_traversal();

}