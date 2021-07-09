class Solution{
  public:
    int isPairPresent(struct Node *root, int target)
    {
    Node *curr1 = root, *curr2 = root;
    stack<Node*> s1,s2;
    while((curr1!=NULL || !s1.empty()) && (curr2!=NULL || !s2.empty()) )
    {
        while(curr1!=NULL)
        {
            s1.push(curr1);
            curr1=curr1->left;
        }
         while(curr2!=NULL)
        {
            s2.push(curr2);
            curr2=curr2->right;
        }
        int a = s1.top()->data , b = s2.top()->data;
        if(a>=b)
        {
            return 0;
        }
        else if(a+b == target) return 1;
        else if(a+b>target)
        {
            curr2 = s2.top();
            s2.pop();
            curr2 = curr2->left;
        }
        else
        {
            curr1 = s1.top();
            s1.pop();
            curr1=curr1->right;
        }
    }
    return 0;
    }
};

//https://www.youtube.com/watch?v=gwxA6MjcOdI