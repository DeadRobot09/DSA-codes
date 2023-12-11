// program to add 2 linked list numbers.
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0); // Dummy node to simplify code
        ListNode* current = dummyHead;
        int carry = 0;

        // Traverse both lists
        while (l1 != nullptr || l2 != nullptr) {
            // Get values of current nodes (if available)
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;

            // Calculate the sum and carry
            int sum = x + y + carry;
            carry = sum / 10;

            // Create a new node with the current digit
            current->next = new ListNode(sum % 10);
            current = current->next;

            // Move to the next nodes if available
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        // Handle any remaining carry
        if (carry > 0) {
            current->next = new ListNode(carry);
        }

        return dummyHead->next; // Skip the dummy node
    }
};

