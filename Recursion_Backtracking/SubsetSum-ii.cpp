/* 1st Solution */
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>v;
        set<vector<int>>s;
        v.push_back({});
        for(int i=1;i<(1<<n);i++)
        {
            vector<int>a;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    a.push_back(nums[j]);
                }
            }
            sort(a.begin(),a.end());
            s.insert(a);
        }
        for(auto &i:s)
        {
            v.push_back(i);
        }
        return v;  
    }
};
/* T.C = (2^N(LOG(2^N)))*/

//Recursive Solution :

/* 
	TC : 2^n * (n) 
	SC : O(2^n) * O(k)
*/

class Solution {
private:
  void findSub(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans){
	ans.push_back(ds);
	for(int i=ind;i<nums.size();i++)
	{
		if(i!=ind && nums[i]==nums[i-1]) continue;
		ds.push_back(nums[i]);
		findSub(i+1,nums,ds,ans);
		ds.pop_back();
	}
}
               public:
vector<vector<int>> subsetsWithDup(vector<int>& nums) 
{
	vector<vector<int>> ans;
	vector<int> ds;
	sort(nums.begin(),nums.end());
    findSub(0,nums,ds,ans);
	return ans;
}
};