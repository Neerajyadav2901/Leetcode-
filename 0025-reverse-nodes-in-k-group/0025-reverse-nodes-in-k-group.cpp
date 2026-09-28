class Solution {
public:

    ListNode* kth_node(ListNode* temp, int k) {
        k -= 1;

        while (temp != NULL && k > 0) {
            k--;
            temp = temp->next;
        }

        return temp;
    }

    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;
        ListNode* prevNode = NULL;

        while (temp != NULL) {

            ListNode* kth = kth_node(temp, k);

           
            if (kth == NULL) {
                if (prevNode != NULL)
                    prevNode->next = temp;
                break;
            }

            ListNode* nextNode = kth->next;

            
            kth->next = NULL;

            // Reverse the group
            ListNode* newHead = reverse(temp);

            // First group
            if (temp == head) {
                head = newHead;
            }
            else {
                prevNode->next = newHead;
            }

            // temp is now the last node of reversed group
            prevNode = temp;

            // Move to next group
            temp = nextNode;
        }

        return head;
    }
};