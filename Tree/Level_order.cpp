class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
      if(root==NULL)
      return result;
      queue<TreeNode *>q;
      q.push(root);
      while(!q.empty())
      {
        int c = q.size();
        vector<int> v;
        
        for(int i = 0; i < c; i++)
        {
            TreeNode* temp = new TreeNode();
            temp = q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            v.push_back(temp->val);
        }
        
        result.push_back(v);
      }
      return result;
    }
};