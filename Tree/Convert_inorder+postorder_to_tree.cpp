int search(int in[], int k, int n)
    {
        for(int i=0;i<n;i++)
        {
            if(in[i]==k)
            return i;
        }   
    }
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    
     if(n==0)
        return NULL;
        Node *temp = new Node(post[n-1]);
        int i = search(in,post[n-1],n);
        
        temp->right = buildTree(in+i+1,post+i,n-1-i);
        temp->left  = buildTree(in,post,i);
        return temp;
}