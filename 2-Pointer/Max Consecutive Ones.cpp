class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return 0;
        int ans=0,count = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            { 
                ans++;
                count = max(ans,count);
            }
            else
            {
                ans = 0;
            }
        }
        return count;
    }
};