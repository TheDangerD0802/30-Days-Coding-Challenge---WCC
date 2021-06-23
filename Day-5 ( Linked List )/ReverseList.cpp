class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head ;
        ListNode *next = NULL , *prev = NULL;
       while (current != NULL) {
            // Store next
            next = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        
        return prev;
    }
};