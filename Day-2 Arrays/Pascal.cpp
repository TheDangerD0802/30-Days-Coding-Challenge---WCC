class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i=0;i<numRows;i++)
        {
            ans[i].resize(i+1);
            ans[i][0] = ans[i][i] = 1;
            
            for(int j=1;j<i;j++)
            {
                ans[i][j] = ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans;
    }
};

/*

	 Pascal Triangle have every row starting and element as 1. 
	 And there n element in nth row. Any element at rth row and cth column ,
	 then element = (r-1)C(c-1)  (Combination). 
	 For a complete row calculating factorial is a  O(N^2) high.
	 So Optimized Approach.
	  O(N) {
		for (int i=0;i<k;i++)
		{
			res*=(n-i);
			res /= (i+1);
		}

	  }

*/

