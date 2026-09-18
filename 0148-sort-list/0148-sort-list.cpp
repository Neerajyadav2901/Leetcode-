class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        vector<int>arr;
        ListNode*temp = head;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
            
        }
        sort(arr.begin(), arr.end());
        temp = head;
        for(int i =0;i<arr.size();i++){
            temp->val = arr[i];
            temp = temp->next;
        }
        
    return head;  
    }
};