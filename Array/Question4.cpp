#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int best_till_now = INT_MIN;
	int curr_best = 0;
	for(auto i:arr)
	{
		curr_best+=i;
		if(curr_best>best_till_now)
			best_till_now = curr_best;
		if(curr_best<0)
			curr_best = 0;
	}
	cout<<best_till_now<<endl;
}

/*
	Gfg - https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
	This is example of kadane algorithm , Largest Sum Contiguous Subarray .
*/