class BSTIterator {
public:
 stack<TreeNode*> stk;
    BSTIterator(TreeNode* root) {
        do {stk.push(root);} while(root=root->left);
    }
    
    int next() {
        TreeNode* current=stk.top();stk.pop();
        int ret=current->val;
        if((current=current->right))
            do {stk.push(current);} while(current=current->left);
        return ret;
    }
    
    bool hasNext() {
        return !stk.empty();
    }
};