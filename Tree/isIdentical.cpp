class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *a, Node *b)
    {
        //Your Code here
        if(a == NULL && b == NULL)
        return 1;
         if (a != NULL && b != NULL)
    {
        return
        (
            a->data == b->data &&
            isIdentical(a->left, b->left) &&
            isIdentical(a->right, b->right)
        );
    }
    return 0;
    }
};