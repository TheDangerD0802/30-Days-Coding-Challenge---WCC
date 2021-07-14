class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int mcut(int a[3],int n){
int dp[4][n+1];
memset(dp,0,sizeof(dp));

for (int i = 0; i <= 3; i++) {
for (int j = 0; j <= n; j++) {
if (i == 0) {
dp[i][j] = INT_MIN ;
}
else if (j == 0) {
dp[i][j] = 0;
}
}
}

for(int i=1;i<=3;i++){
for(int j=1;j<=n;j++){
if(a[i-1]<=j){
dp[i][j]=max(dp[i-1][j],dp[i][j-a[i-1]]+1);
}else{
dp[i][j]=dp[i-1][j];
}
}
}
return dp[3][n]<0?0:dp[3][n];
}

int maximizeTheCuts(int n, int x, int y, int z)
{
//Your code here
int a[3];
a[0]=x,a[1]=y,a[2]=z;
return mcut(a,n);
}
};
