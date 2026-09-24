class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {

        int length = 0;
        ListNode* temp = head;

        // Find length
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }

        // kth node from beginning
        ListNode* first = head;

        for (int i = 1; i < k; i++) {
            first = first->next;
        }

        // kth node from end
        ListNode* second = head;

        for (int i = 1; i < length - k + 1; i++) {
            second = second->next;
        }

        // Swap values
        swap(first->val, second->val);

        return head;
    }
};