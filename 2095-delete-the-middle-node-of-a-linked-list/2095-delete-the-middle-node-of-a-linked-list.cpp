class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return NULL;
        }

        ListNode*temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        
        int pos = count / 2 +1;
        
        ListNode*prev = head;
        for(int i = 1; i <pos-1;i++){
            prev = prev->next;
        }
        prev->next = prev->next->next;
        return head;


        
    }
};