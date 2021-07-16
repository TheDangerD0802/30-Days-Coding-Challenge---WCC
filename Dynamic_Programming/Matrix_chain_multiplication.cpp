class Solution{
public:
    #define ll long long
    int dp[101][101];
    int solve(int arr[], ll i, ll j)
    {
        
        if(i>=j)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        ll ans = INT_MAX;
        for(ll k=i;k<j;k++)
        {
            ll temp = solve(arr,i,k) + solve(arr,k+1,j) + arr[i-1] * arr[k] * arr[j];
            ans=min(ans,temp);
            dp[i][j]=ans;
        }
        return ans;
        
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        memset(dp,-1,sizeof(dp));
         return solve(arr,1,N-1);
    }
};