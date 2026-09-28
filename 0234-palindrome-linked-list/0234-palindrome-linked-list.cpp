class Solution {
public:

    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {

            ListNode* forward = curr->next;

            curr->next = prev;

            prev = curr;
            curr = forward;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return true;
        }

        // Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* secondHalf = reverseList(slow);

        // Compare first half and reversed second half
        ListNode* firstHalf = head;
        ListNode* temp = secondHalf;

        while (temp != NULL) {

            if (firstHalf->val != temp->val) {
                return false;
            }

            firstHalf = firstHalf->next;
            temp = temp->next;
        }

        return true;
    }
};