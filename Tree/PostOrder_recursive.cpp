void helper(Node *root, vector<int> &temp)
{
    if(root==NULL)
    return;
    helper(root->left,temp);
    helper(root->right,temp);
    temp.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> temp;
  helper(root,temp);
  return temp;
}