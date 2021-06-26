class Solution { 
    void findCombi(int index,int target,vector<vector<int>>&ans,vector<int>&ds,vector<int>&arr){
        if(target==0)
        {
          ans.push_back(ds);
          return ;
        } 
        
        for(int i=index;i<arr.size();i++){
            if(i>index  && arr[i]==arr[i-1])continue; 
            //i>index coz i want one copy only ; dry run on case [1,1,1,2,2] and target=4
            if(arr[i]>target)break;
            ds.push_back(arr[i]);
            findCombi(i+1,target-arr[i],ans,ds,arr);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findCombi(0,target,ans,ds,candidates);
        return ans;
    }
};

// Some elements can be repeated in the given array. Make sure to iterate over the number of 
 //occurrences of those elements to avoid repeated combinations. 
/*  TC:  O(2^N)
    SC : O(N) Auxiliary
*/