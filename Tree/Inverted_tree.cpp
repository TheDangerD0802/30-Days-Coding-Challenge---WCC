class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
    {
        return NULL;
    }
    
    struct TreeNode *left;
    struct TreeNode *right;
    if(root)
    {
        left  = invertTree(root->left);
        right = invertTree(root->right);
        
        struct TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;
    }

    return root;
    }
};