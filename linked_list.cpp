#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

class LinkedList {
    private:
        Node *head_node = new Node();
        Node *tail_node = new Node();
        Node *connector_node = new Node(); // for O(1) insertion at the end of the list

    public:
        LinkedList(){
            head_node->data = 0;
            head_node->next = tail_node;

            tail_node->data = -1;
            tail_node->next = nullptr;

            connector_node->data = -1;
            connector_node->next = head_node;
        }

        void insert(int data){
            int tail_data = tail_node->data;
            Node *left_connected_node = connector_node->next;

            Node *new_node = new Node();
            new_node->data = data;
            new_node->next = tail_node;

            left_connected_node->next = new_node;
            connector_node->next = new_node;
        }

        void remove(Node *node_to_remove){
            Node *dummy_node = head_node;
            while (dummy_node != nullptr && dummy_node->next != nullptr){
                if (dummy_node->next->data == node_to_remove->data){
                    dummy_node->next = dummy_node->next->next;
                }
                dummy_node = dummy_node->next;
            }
        }

        void print_linked_list(){
            Node *dummy_node = head_node;

            while(dummy_node != nullptr){
                cout << dummy_node->data << " -> ";
                dummy_node = dummy_node->next;
            }
            cout << "Null" << endl;
        }
};

int main(){

    LinkedList linked_list;
    linked_list.insert(19);
    linked_list.insert(11);
    linked_list.insert(31);
    linked_list.print_linked_list();

    Node *some_node = new Node();
    some_node->data = 11;

    linked_list.remove(some_node);
    linked_list.print_linked_list();
    
    return 0;
}