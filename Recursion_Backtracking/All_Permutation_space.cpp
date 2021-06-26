class Solution {
    private:
    void permu(vector<vector<int>> &ans, vector<int>& nums, vector<int>& ds , int mp[])
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!mp[i])
            {
                ds.push_back(nums[i]);
                mp[i] = 1;
                permu(ans,nums,ds,mp);
                mp[i] = 0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int mp[nums.size()];
        for(int i=0;i<nums.size();i++)
            mp[i] = 0;
        permu(ans,nums,ds,mp);
        return ans;
    }
};