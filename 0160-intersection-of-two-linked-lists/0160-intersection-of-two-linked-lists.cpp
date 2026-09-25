/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA;
        int length_1 = 0;
        ListNode *temp2 = headB;
        int length_2 = 0;

        while(temp1 != NULL){
            temp1 = temp1->next;
            length_1 ++;
        }

        while(temp2 != NULL){
            temp2 = temp2->next;
            length_2 ++;
        }
        temp1 = headA ;
        temp2 = headB;
        if(length_1 > length_2) {
            for(int i=0 ;i<length_1 - length_2 ;i++){
                temp1 = temp1->next;
            }
        }
        else{
            for(int i=0 ;i<length_2 - length_1 ;i++){
                temp2 = temp2->next;
            }
        }

        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;

    }
};