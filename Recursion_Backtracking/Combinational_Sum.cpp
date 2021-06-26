class Solution 
{
    private:
    void recur(int B, vector<vector<int>> &ans, vector<int> &A ,int i , vector<int> r)
    {
        if(B==0)
        {
            //This element should be part of the combination.
            ans.push_back(r);
            return;
        }
        // if(B<0)
        // {
        //     return;
        // }  Ignoring this Sub problem
       // Recur for all remaining elements that
        // have value smaller than sum.
        while (i < A.size() && B - A[i] >= 0) {
     
            // Till every element in the array starting
            // from i which can contribute to the sum
            r.push_back(A[i]); // add them to list
     
            // recur for next numbers
            recur(B-A[i], ans,A,i,r);
            i++;
     
            // Remove number from list (backtracking)
            r.pop_back();
        }
    }
    public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int> > ans;
        sort(A.begin(),A.end());
        vector<int> r;
        A.erase(unique(A.begin(), A.end()), A.end());
        recur(B, ans, A,0 , r);
        return ans;
    }
};