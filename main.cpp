#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
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
            cout << "Inorder traversal:   ";
            Node *_root = root;
            inorder_recursive(_root);
        }

        void inorder_recursive(Node *_root){
            if (_root == nullptr) return;
            inorder_recursive(_root->left);   // left
            cout << _root->data << " ";       // head
            inorder_recursive(_root->right);  // right
        }

        void preorder_traversal(){
            cout << "Preorder traversal:  ";
            Node *_root = root;
            preorder_recursive(_root);
        }

        void preorder_recursive(Node *_root){
            if (_root == nullptr) return;

            cout << _root->data << " ";       // head
            preorder_recursive(_root->left);   // left
            preorder_recursive(_root->right);  // right
        }

        void postorder_traversal(){
            cout << "Postorder traversal: ";
            Node *_root = root;
            postorder_recursive(_root);
        }

        void postorder_recursive(Node *_root){
            if (_root == nullptr) return;

            postorder_recursive(_root->left);   // left
            postorder_recursive(_root->right);  // right
            cout << _root->data << " ";       // head
        }
};

int main(){


        //              100
        //         /           \
        //        50           150
        //     /     \       /     \
        //    30     75    130     175
        //          /              /
        //         70            160

    BinarySearchTree bst;
    bst.insert(100);
    bst.insert(50);
    bst.insert(150);
    bst.insert(30);
    bst.insert(75);
    bst.insert(70);
    bst.insert(130);
    bst.insert(175);
    bst.insert(160);

    bst.inorder_traversal(); // prints 30 50 70 75 100 130 150 160 175
    cout << endl;
    bst.preorder_traversal();  // prints 100 50 30 75 70 150 130 175 160
    cout << endl;
    bst.postorder_traversal();  // prints 30 70 75 50 130 160 175 150 100

}