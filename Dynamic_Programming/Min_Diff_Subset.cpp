class Solution{
    int subset(int arr[], int N, int sum)
    {
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
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                else
                dp[i][j] = dp[i-1][j];
            }
        }
        unordered_set<int>hash;  
	  for(int i = 0; i <= sum; ++i){
	      if(dp[N][i]){
	          hash.insert(i); 
	      }
	  }
	    
	  int mn = INT_MAX; 
	  for(int i = 0; i <= sum/2; i++){
	      if(hash.find(i) != hash.end()){
	          mn = min(mn, sum-2*i);
	      }
	  }
        return mn;
    }
  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum = 0;
	    for(int i=0;i<n;i++)
	    sum+=arr[i];
	    
	    return subset(arr,n,sum);
	} 
};

