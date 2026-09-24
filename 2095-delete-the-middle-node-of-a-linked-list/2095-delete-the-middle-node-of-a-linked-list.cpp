class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        // Only one node
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Here slow is the middle node
        // But we need the previous node to delete it,
        // so use a separate pointer.

        ListNode* prev = head;

        while (prev->next != slow) {
            prev = prev->next;
        }

        prev->next = slow->next;

        return head;
    }
};