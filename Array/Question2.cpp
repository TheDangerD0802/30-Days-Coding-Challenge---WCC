#include<bits/stdc++.h>
using namespace std;
void solve(int arr[], int n)
{
	int arr[2];
	 for(int i=0;i<n;i++)
        {
            if(arr[abs(arr[i])-1]>0)
            {
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            }
        else
           ans[0]=(abs(arr[i]));
            
        }
          for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            ans[1]=(i+1);
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
}
int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	solve(arr,n);
}

/*

	gfg - medium Question (https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1)
	Traverse the array. While traversing, use the absolute value of every element as an index and make the value at this
	index as negative to mark it visited. If something is already marked negative then this is the repeating element.
    To find missing, traverse the array again and look for a positive value.

*/
