class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       if(nums.size() < 3) return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<(nums.size()-2);i++)
        {
            //for no duplicates condition from starting
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int lo = i+1,high = nums.size()-1, sum=0 - nums[i];  //b+c == sum == -a(nums[i]).
                while(lo<high)
                {
                    if(nums[lo]+nums[high]==sum){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[high]);
                        ans.push_back(temp);
                        //for removing duplicates in low-high range.
                        while(lo<high && nums[lo] == nums[lo+1]) lo++;
                        while(lo<high && nums[high] == nums[high-1]) high--;
                        
                        lo++; high--;
                    }
                    //logic where to move either towards right of low or left of high.
                    else if(nums[lo]+nums[high]<sum) lo++;
                    else high--;
                }
            }
        }
        return ans;
    }
};
/*
2 pointer Approach

if we get b+c = -a;
for this a is arr[i],
then low = i+1, right = n-1;
Now using logic that array is already sorted moving which pointer would benefit.
T.C -> O(N^2).

*/