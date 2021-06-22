/*

	Firstly ask if the matrix is row wise and column wise both - way sorted ot not.
	Brute Force :  Linearly Traverse the array O(N^2) .
	Optimized Approach to use the sorted way  :
		We will use the information of sorted rows. Now we will apply the binary search 
		on the rows. O(N*Log(N)).
	More optimzed  (Both way sorted):  Put the pointer at the last position of first row.
				Here now u will either move in same row or next column.
				So the complexity get reduced.

	If value in matrix are as sorted array , now u can apply binary search buy by use a temporary array.
	You can get value of the next mid will be ( low  = 0 , high  = (m+n-1)),
	to find out index we can do : i = mid/m , j = mid%m. Then update the low and mid as u do.

*/

bool solve(vector<vector<int>> mat, int target)
{
	int m = mat[0].size();
	int n = mat.size();
	int i=0, j=m-1;
	while(i<n && j>=0)
	{
		if(mat[i][j]==x)
		{
			return 1;
		}
		if(mat[i][j]>x)
		{
			j--;
		}
		else
			i++;
	}
	return 0;
}

/* Solution 2 */
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo = 0;
        if(!matrix.size()) return false;
        int hi = (matrix.size() * matrix[0].size()) - 1;
        
        while(lo <= hi) {
            int mid = (lo + (hi - lo) / 2);
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target) {
                return true;
            }
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        return false;
    }
};