class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL)
            return head;

        ListNode* temp = head;
        int length = 0;

        ListNode* a = NULL;
        ListNode* b = NULL;
        ListNode* c = NULL;

        // Find length
        while(temp != NULL){
            temp = temp->next;
            length++;
        }

        // Avoid unnecessary rotations
        k = k % length;

        if(k == 0)
            return head;

        // Reset temp
        temp = head;

        // Find:
        // a = node before new head
        // b = new head
        // c = last node
        for(int i = 1; i <= length; i++){

            if(i == length - k)
                a = temp;

            if(i == length - k + 1)
                b = temp;

            if(i == length)
                c = temp;

            temp = temp->next;
        }

        // Break the list
        a->next = NULL;

        // Connect last node to old head
        c->next = head;

        return b;
    }
};