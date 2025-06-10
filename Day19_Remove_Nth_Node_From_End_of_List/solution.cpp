#include <iostream>
#include<vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to remove the nth node from end
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Move fast n+1 steps ahead
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // Move both pointers
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Delete the nth node from end
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;
        delete nodeToDelete;

        return dummy->next;
    }
};

// Helper function to create a linked list from an array
ListNode* createList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* current = head;
    for (int i = 1; i < vals.size(); ++i) {
        current->next = new ListNode(vals[i]);
        current = current->next;
    }
    return head;
}

// Helper function to print linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution sol;
    vector<int> input = {1, 2, 3, 4, 5};
    int n = 2;

    ListNode* head = createList(input);
    cout << "Original list: ";
    printList(head);

    head = sol.removeNthFromEnd(head, n);
    cout << "After removing " << n << "th node from end: ";
    printList(head);

    return 0;
}
