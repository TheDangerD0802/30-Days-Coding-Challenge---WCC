class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        //code here.
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            mp[arr[i]]++;
        }
        ans.push_back(mp.size());
        for(int i=k;i<n;i++)
        {
            mp[arr[i-k]]--;
            if(mp[arr[i-k]]==0)
            mp.erase(arr[i-k]);
            
            
                mp[arr[i]]++;
            
            
            ans.push_back(mp.size());
        }
        return ans;
    }
};