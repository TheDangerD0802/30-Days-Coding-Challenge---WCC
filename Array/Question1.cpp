#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	int one = 0 , zero = 0, second = 0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
			one++;
		else if(arr[i]==0)
			zero++;
		else
			second++;
	}	
	while(zero--)
		cout<<"0"<<" ";
	while(one--)
		cout<<"1"<<" ";
	while(second--)
		cout<<"2"<<" ";

	return 0;
}
/*
		LeetCode Solution - 75 Sort Colors

		class Solution {
		public:
		    void sortColors(vector<int>& arr) {
		        if(arr.size()==0)
		            return ;
		        int one = 0 , zero = 0, second = 0;
		        
			for(int i=0;i<arr.size();i++)
			{
				if(arr[i]==1)
					one++;
				else if(arr[i]==0)
					zero++;
				else
					second++;
		        
			}	
		    arr.clear();
			while(zero--)
				arr.push_back(0);
			while(one--)
				arr.push_back(1);
			while(second--)
				arr.push_back(2);

		    }
};

*/