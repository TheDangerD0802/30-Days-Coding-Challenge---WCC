class Solution
{
    void solve(Node* root, int k, int &res, int &index)
    {
        if(root)
        {
            solve(root->right,k,res,index);
            if(k==index)
            {
                res = root->data;
            }
            index++;
            solve(root->left,k,res,index);
        }
        return ;
    }
    public:
    int kthLargest(Node *root, int k)
    {
        //Your code here
        int res  =-1;
        int index = 1;
        solve(root,k,res,index);
        return res;
    }
};