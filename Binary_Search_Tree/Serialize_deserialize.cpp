string serialize(TreeNode* root) {
        if(root==NULL) return "#";
        return to_string(root->val)+","+
               serialize(root->left)+","+serialize(root->right);
        
    }
     TreeNode* deserializeHelper(queue<string> &q){
        string s = q.front();
        q.pop();
        if(s=="#") return NULL;
        TreeNode* root = new TreeNode(stoi(s));
        root->left=deserializeHelper(q);
        root->right=deserializeHelper(q);
        return root;
     }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> q;
        string s="";
        
        for(int i=0;i<data.size();i++)
        {
            if(data[i]==',')
            {
                q.push(s);
                s="";
                continue;
            }
            s+=data[i];
            
        }
        if(s.size()!=0) q.push(s);
        return deserializeHelper(q);
    }
};
