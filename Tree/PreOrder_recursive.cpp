void helper(Node *root, vector<int> &temp)
{
    if(root==NULL)
    return;
    temp.push_back(root->data);
    helper(root->left,temp);
    helper(root->right,temp);
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> temp;
  helper(root,temp);
  return temp;
}