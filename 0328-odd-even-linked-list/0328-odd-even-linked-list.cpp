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
    ListNode* oddEvenList(ListNode* head) {
         ListNode* d1 = new ListNode(-1);
        ListNode* temp1 = d1 ;
        ListNode* d2 = new ListNode(-1);
        ListNode* temp2 = d2 ;
        ListNode* temp = head ;
        int idx = 1;
        while(temp!=NULL){
            if(idx % 2 == 1) {
                temp1->next = temp ;
                temp1 = temp ;
                temp = temp->next;
            }
            else{
                temp2->next = temp ;
                temp2 = temp ;
                temp = temp->next;
            }
            idx++;
        }
        temp1->next = NULL ;
        temp2->next = NULL ;
        temp1->next = d2->next ;
        return d1->next;

    }
    
};