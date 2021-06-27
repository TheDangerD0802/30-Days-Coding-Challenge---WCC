/* All rows are sorted 
Brute : Saare elements ko array mei daal do aur sort krdo ,
fir middle element is median. 
Time Complexity : O(n^2).
Space : o(n+n).
*/


//Optimised - 1 O(32*R*log(C))

/*
1. Deciding the search space [ 1- 10^9 ].
2. Calculate the mid then find element smaller then mid .
3. Logically median is a number who has number lesser and greater than are equal.
*/

int countsmaller(vector<int> &row, int mid)
{
	int l=0,h=row.size()-1;
	while(l<=h)
	{
		int md = (l+h)>>1;
		if(row[md]<=mid)
		{
			l=mid+1;
		}
		else
			h=mid-1;
	}
	return l;
}
int findmedian(vector<vector<int>> &A)
{
	int low=1;
	int high = 1e9;
	int n = A.size();
	int m = A[0].size();
	while(low<=high)
	{
		int mid = (low+high)>>1;
		int cnt = 0;
		for(int i=0;i<n;i++)
		{
			cnt+=countsmaller(A[i],mid);
		}
		if(cnt<=(n+m)/2) low = mid +1;
		else
			high = mid -1;

	}
	return low;
}

// Optimzed -2  : O(32*R*log(C))
int median(vector<vector<int>> &A, int r, int c){
        // code here     
   int req=(r*c+1)/2;
    int minm=INT_MAX,maxm=INT_MIN;
    for(int i=0;i<r;i++){
        minm=min(minm,A[i][0]);
        maxm=max(maxm,A[i][c-1]);
    }
    while(minm<maxm){
        int mid=minm+(maxm-minm)/2;
        int place=0;
        for(int i=0;i<r;i++)
         place+=upper_bound(A[i].begin(),A[i].end(),mid)-A[i].begin();
         
        if(place<req) minm=mid+1;
        else maxm=mid;
    }
    return minm;
    }