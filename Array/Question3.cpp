#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;
	vector<int> arr1, arr2;
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>arr2[i];
	}
		int j = 0, i = n-1;
		while(j < m && i > -1 && arr2[j] < arr1[i])
		swap(arr2[j++],arr1[i--]);
		sort(arr1,arr1+n);
		sort(arr2,arr2+m);
		for(int i=0;i<(n);i++)
		{
			cout<<arr1[i]<<" ";
		}
		for(int i=0;i<m;i++)
		{
			cout<<arr2[i]<<" ";
		}
}

/*
	Time Complexity : O((n+m) log(n+m))
	Not completely Optimal
	Here we will do only the minimum swaps required such that we put elements from arr2 to arr1. We will check smaller element 
	from arr2 and swap them with larger element of arr1. 
	Once required swap are done then sort the array indiviually.
*/