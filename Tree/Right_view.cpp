vector<int> leftView(Node *root)
{
   // Your code here
        vector<int> result;
      if(root==NULL)
      return result;
      queue<Node *>q;
      q.push(root);
      while(!q.empty())
      {
        int c = q.size();
        
        
        for(int i = 0; i < c; i++)
        {
            Node* temp = new Node();
            temp = q.front();
            q.pop();
            if(i==c-1)
            result.push_back(temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            //v.push_back(temp->val);
        }
        
        //result.push_back(v);
      }
      return result;
   
}