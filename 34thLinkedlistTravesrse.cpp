#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* middleNode(ListNode* head) {
    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    // Create list 1->2->3->4->5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    
    // Corrected part:
    ListNode *middle = middleNode(head);
    cout << "Middle node is " << middle->val << endl;
    
    // Clean up memory
    ListNode *current = head;
    while (current) {
        ListNode *temp = current;
        current = current->next;
        delete temp;
    }
    
    return 0;
}