bool isPalindrome(Node *head)
    {
        //Your code here
        stack<int> s;
        Node* d1 = head;
        while(d1!=NULL)
        {
            
            s.push(d1->data);
            d1=d1->next;
        }
        while(head!=NULL)
        {
            if(s.top()!=head->data)
            return false;
            
            s.pop();
            head=head->next;
        }
        return true;
    }