class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        int n = 1;
        ListNode*tail = head;
       while(tail->next != NULL){
        tail = tail->next;
        n++;
       }
       k = k%n;
       if(k==0)
         return head;
       
       tail->next = head;

       int steps = n-k-1;
       ListNode*newtail = head;
       for(int i = 0; i < steps;i++){
       newtail =  newtail->next ;
       }
      ListNode*newhead = newtail->next;
       newtail->next = NULL;
       return newhead;
        
    }
};