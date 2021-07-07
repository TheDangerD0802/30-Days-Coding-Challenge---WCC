class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    int isBSTUtil(Node* node, int min, int max)
    {
        /* an empty tree is BST */
        if (node==NULL)
            return 1;
        if (node->data < min || node->data > max)
            return 0;
        return
            isBSTUtil(node->left, min, node->data-1) && 
            isBSTUtil(node->right, node->data+1, max);
            
        
    }
    bool isBST(Node* root) 
    {
        // Your code here
        return(isBSTUtil(root, INT_MIN, INT_MAX));
    }
};