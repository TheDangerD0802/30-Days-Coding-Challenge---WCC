vector <int> bottomView(Node *root)
{
   // Your Code Here
   map<int,int> m;
        vector<int> ans;
        queue<pair<Node *,int>>q;
        if(!root)
        return ans;
        q.push({root,0});
        while(!q.empty())
        {
            Node *temp = q.front().first;
            int h = q.front().second;
            q.pop();
            m[h] = temp->data;
            if(temp->left) q.push({temp->left,h-1});
            if(temp->right) q.push({temp->right,h+1});
        }
        for(auto x:m)
        ans.push_back(x.second);
        return ans;
}
