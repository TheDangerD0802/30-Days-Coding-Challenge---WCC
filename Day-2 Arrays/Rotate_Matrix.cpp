class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};


/*

	Brute Force  : Use extra matrix to put first row in last column ans so on.
	Optimized : (inplace) 
	1. First do the tranpse.
	2. reverse every  row. 

*/

