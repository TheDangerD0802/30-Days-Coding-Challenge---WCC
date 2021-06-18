#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<vector<int,int>> v;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>v[i][j];
		}
	}
		sort(v.begin(),v.end());
        vector<vector<int>>ans;
        
        int start=v[0][0],end=v[0][1];
        
        for(int i=1;i<v.size();i++)
        {
            if(v[i][0]>=start&&v[i][0]<=end)
            {
                end=max(end,v[i][1]);
            }
            else
            {
                ans.push_back({start,end});
                start=v[i][0];
                end=v[i][1];
            }
        }
        
         ans.push_back({start,end});

         for(int i=0;i<ans.size();i++)
         {
         	for(int j=0;j<ans[0].size();j++)
         	{
         		cout<<ans[i][j]<<" ";
         	}
         	cout<<endl;
         }
}

/*

	In this problem first sort the given interval on basis of the first value of interval. Now we can conclude that interval 
	will concincide when end of an interval is less than the start of the next element. 

*/