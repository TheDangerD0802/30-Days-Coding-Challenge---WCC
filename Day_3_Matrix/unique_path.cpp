/*
	Brute Force : Recursive Approach , find all possible solution.For every cell u have possibility
	right or to diwn. Base case will be when cell reaches out of the box.

	Answer  : Total of all the paths , that is all the valid paths we get.
	int countpath(int i, int j, int n ,int m)
	{
	if(i==(n-1) && j ==(m-1)) return 1;
	if(i>=n || j>=m) return 0;
	else return countpath(i+1,j) + countpath(i,j+1);
	}
	Time Complexity = O(2^N).
	
	Optimzed = Dp Solution
	int countpath(int i, int j, int n ,int m, vector<vector<int>> &dp)
	{
	if(i==(n-1) && j ==(m-1)) return 1;
	if(i>=n || j>=m) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	else return  dp[i][j] = countpath(i+1,j,dp) + countpath(i,j+1,dp);
	}
	
	Combination Solution:
	  m+n-2 C (n or m).
*/

int UniquePaths(int n, int m)
{
int N = n+m-2;
int r = m-1;
double res = 1;
for(int i=1;i<=r;i++)
{
	res = res * (N-r+i)/i;
}
return (int)res;
}