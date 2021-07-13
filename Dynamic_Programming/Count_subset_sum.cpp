class Solution{

	public:
	int perfectSum(int arr[], int N, int sum)
	{
        // Your code goes here
        int mod = 1e9+7;
         int dp[N+1][sum+1];
        for(int i=0;i<N+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if( i==0)
                dp[i][j] = 0;
                if(j==0)
                dp[i][j] = 1;
            }
        }
        for(int i=1;i<N+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j] = (dp[i-1][j-arr[i-1]] + dp[i-1][j])%mod;
                }
                else
                dp[i][j] = dp[i-1][j];
            }
        }
      
        return dp[N][sum];
	}
	  
};