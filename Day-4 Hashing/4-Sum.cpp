/*
1. Sort the array.
2. We will be jumping over the duplicates and finding for the reuired sum.

use i pointer i = 0 to n-1
j from i+1 o n-1
and left and right pointer.

Time Complexity  :O(N^3)
Space Complexity : O(1)


*/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.size() == 0)
        {
            return res;
        }
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            for(int j =i+1; j<n;j++)
            {
                int target_2 = target - nums[j] - nums[i];
                int front  = j+1;
                int back = n-1;
                while(front<back)
                {
                    int two_sum = nums[front]+nums[back];
                    if(two_sum < target_2) front++;
                    else if(two_sum > target_2) back--;
                    else
                    {
                        vector<int> quad;
                        quad.push_back(nums[i]);
                        quad.push_back(nums[j]);
                        quad.push_back(nums[front]);
                        quad.push_back(nums[back]);
                        res.push_back(quad);
                        while(front < back && nums[front] == quad[2]) ++front;
                       while(front < back && nums[front] == quad[3]) --back; 
                    }
                }
                while(j+1<n && nums[j+1] == nums[j]) ++j;
                while(i+1<n && nums[i+1]==nums[i]) ++i;
            }
        }
                             return res;
    }
};