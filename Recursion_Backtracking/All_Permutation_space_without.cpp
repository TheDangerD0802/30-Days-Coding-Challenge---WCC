class Solution
{
    private:
        void permute(string a, int l, int r, vector<string> &ans )
        {
            if (l == r)
        ans.push_back(a);
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
 
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            permute(a, l+1, r,ans);
 
            //backtrack
            swap(a[l], a[i]);
        }
    }
        }
    public:
        vector<string>find_permutation(string S)
        {
            // Code here there
            int n = S.size();
            vector<string> ans;
            int l =0, r=n-1;
            
            permute(S,l,r,ans);
            sort(ans.begin(),ans.end());
            return ans;
        }
};