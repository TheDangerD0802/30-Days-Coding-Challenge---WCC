class Solution
{
    void maxAbsDiff(Node *root, int K, int &absMin)
    {
        if(root)
        {
            absMin = min(absMin, abs(K - root->data));
            
            if(root->data > K)
            {
                maxAbsDiff(root->left, K, absMin);
            }
            else
            {
                maxAbsDiff(root->right, K, absMin);
            }
        }
    }
    
    public:
    int minDiff(Node *root, int K)
    {
        int absMin = INT_MAX;
    
        maxAbsDiff(root, K, absMin);
        
        return absMin;
    }
};
