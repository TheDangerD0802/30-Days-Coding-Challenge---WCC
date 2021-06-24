
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    if(head1->next == NULL || head2->next == NULL)
    return -1;
    Node *a = head1;
    Node *b = head2;
    while(a!=b)
    {
        a = a == NULL?head2 :a->next;
        b = b == NULL?head1 :b->next;
    }
    return a->data;
    
}