class Solution {
    public:
        int LongestRepeatingSubsequence(string s1){
            // Code here
    string s2 = s1;
    int x = s1.size();
    int y = s2.size();
     int dp[x+1][y+1];
    
    for(int i = 0; i <= x; i++)
    {
        dp[i][0] = 0;
    }
    
    for(int j = 0; j <= y; j++)
    {
        dp[0][j] = 0;
    }
    
    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= y; j++)
        {
            if(s1[i-1] == s2[j-1] && i!=j)
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    return dp[x][y];
        }

};
