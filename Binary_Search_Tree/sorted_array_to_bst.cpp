 TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return nullptr;
        
        return solve(nums,0,nums.size()-1);
    }
    
    TreeNode* solve(vector<int>& nums,int l, int r)
    {
        if(l>r) return nullptr;
        int mid = l + (r-l)/2;
        TreeNode* node = new TreeNode(nums[mid]);  // RECURSIVE BINARY SEARCH!
        node->left = solve(nums,l,mid-1);
        node->right = solve(nums,mid+1,r);
        
        return node;
    }