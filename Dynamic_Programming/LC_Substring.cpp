class Solution {
public:
    int findLength(vector<int>& s1, vector<int>& s2) {
        int x = s1.size();
        int y = s2.size();
        int dp[x+1][y+1];
        for(int i=0;i<=x;i++)
        {
        for(int j=0;j<=y;j++)
           if(i==0||j==0)
            dp[i][j] = 0;
        }
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(s1[i-1]==s2[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                else
                    dp[i][j] = 0;
            }
        
                    }
        int res = 0;
        for(int i=0;i<=x;i++)
        {
            for(int j=0;j<=y;j++)
            {
                res = max(dp[i][j],res);
            }
        }
        return res;

    }
};