class Solution
{
public:
void func(int ind, int sum, vector<int> &arr, int n, vector<int> &sumsub)
{
    if(ind == n)
    {
        sumsub.push_back(sum);
        return;
    }
    func(ind+1,sum+arr[ind],arr,n,sumsub);
    func(ind+1,sum,arr,n,sumsub);
}
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        vector<int> sumsub;
        func(0,0,arr,n,sumsub);
        sort(sumsub.begin(),sumsub.end());
        return sumsub;
    }
};
