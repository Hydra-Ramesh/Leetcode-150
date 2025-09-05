#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        int length = 0;

        // Count length
        for (ListNode* temp = head; temp != NULL; temp = temp->next) {
            length++;
        }

        // If removing the head
        if (length == n) return head->next;

        // Move slow to the node just before the one to remove
        for (int i = 1; i < length - n; i++) {
            slow = slow->next;
        }

        // Remove nth node
        slow->next = slow->next->next;

        return head;
    }
};

// Helper: print list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next != NULL) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Helper: create list from array
ListNode* createList(int arr[], int n) {
    if (n == 0) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < n; i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    ListNode* head = createList(arr, 5);

    cout << "Original list: ";
    printList(head);

    Solution s;
    int n = 2; // remove 2nd from end
    head = s.removeNthFromEnd(head, n);

    cout << "After removing " << n << "th node from end: ";
    printList(head);

    return 0;
}
