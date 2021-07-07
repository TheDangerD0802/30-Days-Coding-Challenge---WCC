class Solution {
public:
    int findMaxUtil(TreeNode* root, int &res)
{
    if (root == NULL)
        return 0;
    int l = findMaxUtil(root->left,res);
    int r = findMaxUtil(root->right,res);
    int max_single = max(max(l, r) + root->val, root->val);
    int max_top = max(max_single, l + r + root->val);
    res = max(res, max_top);
 
    return max_single;
}
    int maxPathSum(TreeNode* root) {
    int res = INT_MIN;
    findMaxUtil(root, res);
    return res;
    }
};