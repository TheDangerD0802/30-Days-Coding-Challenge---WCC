class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
       if(root == NULL)
       return NULL;
       if(n1->val<root->val && n2->val<root->val)
       return lowestCommonAncestor(root->left,n1,n2);
       else if(n1->val>root->val && n2->val>root->val)
       return lowestCommonAncestor(root->right,n1,n2);
       else
       return root; 
    }
};