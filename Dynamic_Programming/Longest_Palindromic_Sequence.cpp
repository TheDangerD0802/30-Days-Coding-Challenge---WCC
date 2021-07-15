int longestPalinSubseq (string s1)
{
    // your code here
    string s2= s1;
    reverse(s2.begin(), s2.end());
    //LPS(s1) = LCS(s1,reverse(s2));
    
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
            if(s1[i-1] == s2[j-1])
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