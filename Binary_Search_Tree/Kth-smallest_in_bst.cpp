class Solution{
    
  public:
 void inOrderTraversal(Node *root, int K, int &index, int &res)
{
    if(root)
    {
        inOrderTraversal(root->left, K, index, res);
        
        if(index == K)
        {
            res = root->data;
        }
        index++;
        
        inOrderTraversal(root->right, K, index, res);
    }
}


int KthSmallestElement(Node *root, int K)
{
    int res = -1;
    int index = 1;
    
    inOrderTraversal(root, K, index, res);
    
    return res;
}
};