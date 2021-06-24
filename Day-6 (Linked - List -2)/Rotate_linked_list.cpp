class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)
            return head;
        ListNode *d1 = head;
        int len = 1;
        while(d1->next!=NULL && len++)
        {
            d1 = d1->next;
            
        }
        d1->next = head;
        k = k%len;
     k = len-k;
        while(k--)
        {
            d1=d1->next;
        }
        head = d1->next;
        d1->next = NULL;
        return head;
    }
};