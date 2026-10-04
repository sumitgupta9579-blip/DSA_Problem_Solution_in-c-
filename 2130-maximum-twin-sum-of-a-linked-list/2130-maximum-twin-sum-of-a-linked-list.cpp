/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    int pairSum(ListNode* head) {
        // Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* secondHalf = slow->next;
        slow->next = NULL ;
        secondHalf = reverseList(secondHalf);

        int maxSum = 0 ;
        ListNode*  temp1 = head ;
        ListNode*  temp2 = secondHalf ;
        while(temp2 != NULL){
            if(temp1->val + temp2->val > maxSum ) maxSum = temp1->val + temp2->val ;
            temp1 = temp1->next ;
            temp2 = temp2->next;
        }

        return maxSum ;
    }
};