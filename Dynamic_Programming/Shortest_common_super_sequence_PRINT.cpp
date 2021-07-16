class Solution {
public:
    string shortestCommonSupersequence(string s1, string s2) {
        int x = s1.size() , y=s2.size();
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
    
    string s;
    int i=x;
    int j=y;
    
    while(i>0 && j>0)
    {
        if(s1[i-1]==s2[j-1])
        {
            s.push_back(s1[i-1]);
            i--;
            j--;
        }
        else
        {
            if(dp[i-1][j]>dp[i][j-1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
    }
    reverse(s.begin(),s.end()); //LCS STRING
    
    //THE FINAL SHOWDOWN (STORING REST OF CHARACTER)
    int p1=0;//pointer for s1
    int p2=0;//pointer for s2
    int p3=0;//pointer for s(LCS string)
    
    string ans; //STRING FOR ANSWER
    
    while(p1<x || p2<y)
    {
        if(p2==y) 
        {
            while(p1<x)
            {
                ans.push_back(s1[p1]);
                p1++;
            }
                 
        }
        else if(p1==x)
        {
            while(p2<y)
            {
                ans.push_back(s2[p2]);
                p2++;
            }
                 
        }
        else
        {
           if(s1[p1]!=s[p3])
           {
            ans.push_back(s1[p1]);
            p1++;
           }
           else
           {
               while(s2[p2]!=s[p3])
               {
                ans.push_back(s2[p2]);
                p2++;
               }
              ans.push_back(s[p3]);
              p1++;
              p2++;
              p3++;
           }
        }
    }
   return ans; 
    }
};