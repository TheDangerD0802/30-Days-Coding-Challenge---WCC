void helper(Node *root, vector<int> &temp)
{
    if(root==NULL)
    return;
    helper(root->left,temp);
    temp.push_back(root->data);
    helper(root->right,temp);
}
vector <int> inOrder(Node* root){
      vector<int> temp;
      helper(root,temp);
      return temp;
    }