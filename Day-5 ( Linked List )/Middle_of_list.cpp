int getMiddle(Node *head)
{
   // Your code here
   Node *first = head;
   Node *second = head;
   
   while(second != NULL && second->next != NULL)
   {
       first=first->next;
       second=second->next->next;
       
   }
   return first->data;
}
/*Two Pointer Approach*/