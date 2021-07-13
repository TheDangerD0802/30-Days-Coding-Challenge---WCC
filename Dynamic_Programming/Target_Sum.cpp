int findTargetSumWays(vector<int>& nums, int S) {
         int n = nums.size();

        int arrSum = 0;

        for(int i=0;i<n;i++){
            arrSum += nums[i];
        }
        if(S > arrSum) return 0;
        if((S+arrSum)%2!=0) return 0;
        int sum = (arrSum + S)/2;
        int dp[n+1][sum+1];
        //init
        for(int i=0;i<=n;i++){
            dp[i][0] = 1;
        }
        for(int j=1;j<=sum;j++){
            dp[0][j] = 0;
        }
        //loop
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(nums[i-1]<=j){
                    dp[i][j] = dp[i-1][j-nums[i-1]]+dp[i-1][j];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return (dp[n][sum]);
    }