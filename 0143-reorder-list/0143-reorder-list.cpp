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
    void reorderList(ListNode* head) {
         // Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while ( fast->next != NULL and fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* secondHalf = slow->next;
        slow->next = NULL ;
        secondHalf = reverseList(secondHalf);

        ListNode* dummy = new ListNode(-1);
        ListNode* temp1 = head ;
        ListNode* temp2 = secondHalf ;
        ListNode* temp = dummy ;

        while(temp1 != NULL ){
            temp->next = temp1;
            temp = temp->next ;
            temp1 = temp1->next;

            temp->next = temp2;
            temp = temp->next ;
            if(temp2 != NULL) temp2 = temp2->next;
        }
    }
};