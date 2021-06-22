/*

	Use map to count the frequency of element. 
	Time Complexity : O(N logN)
	Space Complexity : O(N)
	
	Moore Voting Algorithm:
	Element is going to appear more than n/2 times. So 
	As element is bound to get more n/2 no of times so ,its count is
	always going to be left at end.

*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int m_i = 0 , c = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[m_i]==nums[i])
                c++;
            else
                c--;
            
            if(c==0)
            {
                m_i= i;
                c=1;
            }
        }
        
        int x =  nums[m_i];
        c = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==x)
                c++;
        }
        if(c>nums.size()/2)
            return nums[m_i];
        else
            return 0;
    }
};