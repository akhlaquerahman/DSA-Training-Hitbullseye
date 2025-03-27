#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

int main() {
    // Create list: 1->2->3->4->5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    
    // Delete node at position 3 (value 3)
    int p = 3;
    Node* temp = head;
    for (int i = 1; i < p-1; i++) temp = temp->next;
    temp->next = temp->next->next;
    
    // Print modified list
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null";
    
    // Memory cleanup (optional in this short example)
    while (head) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
    }
    
    return 0;
}