    public:
    int longestUniqueSubsttr(string s){
        //code
        vector<int> mp(256, -1);
        int left = 0, right = 0;
        int n = s.size();
        int len = 0;
        while(right<n)
        {
            if(mp[s[right]]!=-1) left = max(mp[s[right]] + 1, left);
            mp[s[right]] = right;
            len = max(len,right-left+1);
            right++;
        }
        return len;
    }
};
