#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true; // cycle detected
        }
        return false; // no cycle
    }
};

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5 -> back to 2 (cycle)
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    
    // Create cycle: last node points to node 2
    head->next->next->next->next->next = head->next;
    
    Solution s;
    if (s.hasCycle(head)) {
        cout << "Cycle detected!" << endl;
    } else {
        cout << "No cycle." << endl;
    }

    return 0;
}
