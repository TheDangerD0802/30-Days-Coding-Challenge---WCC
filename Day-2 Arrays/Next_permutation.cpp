/*

	Algorithm
	1. Move from backward and untill the increasing order goes wrong stop at that position.
	Mark that index of lower element from back as first. Now again check from back and find the element ,
	which is greater than tha element[first]. Mark that as number 2. Now swap them , and reverse
	the array from last till index first.

	next_permutation(arr.begin(), arr.end());
*/ 


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==1)
        {
            return;
        }
        
        int replace, i;
        
        for(i=n-2; i>=0; i--)
        {
            if(nums[i+1] > nums[i])
            {
                replace = nums[i];
                break;
            }
        }
        
        int cand = INT_MAX, candIdx;
        
        if(i<0)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        else
        {
            for(int j=n-1; j>i; j--)
            {
                if(nums[j] > replace)
                {
                    cand = min(cand, nums[j]);
                    if(cand==nums[j])
                    {
                        candIdx = j;
                    }
                }
            }
            swap(nums[i], nums[candIdx]);
            
            sort(nums.begin()+i+1, nums.end());
            
        }
        
    }
};