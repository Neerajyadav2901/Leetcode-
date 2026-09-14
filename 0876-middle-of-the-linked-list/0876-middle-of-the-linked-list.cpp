
class Solution {
public:
   ListNode* middleNode(ListNode* head) {
       if(head == NULL || head->next == NULL){
        return head;
       }
       int count = 0;
       ListNode*temp = head;
       while(temp != NULL){
        count++;
        temp = temp->next;

       }
           temp = head;
       int mid = count/2 +1;
       while(temp != NULL){
        mid = mid -1;
        if(mid == 0)
        break;
        temp = temp->next;


       }
       return temp;
        
    }
};