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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        ListNode* temp_1 = head ;
        ListNode* temp_2 = dummy ;
        while(temp_1 != NULL){
            ListNode* x = temp_1->next ;
            if( x != NULL &&  temp_1->val == x->val) {
                while( x != NULL && temp_1->val == x->val) x = x->next ;
                temp_1 = x ;
            }
            else{
                temp_2->next = temp_1 ;
                temp_2 = temp_1 ;
                temp_1 = temp_1->next;
            }
        }
        temp_2->next = NULL ;
        return dummy->next;
    }
};