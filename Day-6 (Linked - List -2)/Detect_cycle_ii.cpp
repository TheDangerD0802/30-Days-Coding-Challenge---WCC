class Solution {
public:
    ListNode *detectCycle(ListNode *list) {
           ListNode *slow_p = list, *fast_p = list , *entry = list;
 
    while (slow_p && fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p) {
            while(slow_p!=entry)
            {
                slow_p=slow_p->next;
                entry = entry->next;
            }
            return entry;
  
        }
    }
    return 0;
    
    }
};