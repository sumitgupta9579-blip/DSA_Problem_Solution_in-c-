class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode *slow = head;
        ListNode *fast = head;

        // Step 1: Detect cycle
        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                break;
        }

        // No cycle
        if (fast == NULL || fast->next == NULL)
            return NULL;

        // Step 2: Find starting point of cycle
        ListNode *temp = head;

        while (temp != slow) {
            temp = temp->next;
            slow = slow->next;
        }

        return temp;
    }
};