class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        int maxDeadline=0,lav=0,count=0;
        for(int i=0;i<n;i++)
        {
            maxDeadline=max(maxDeadline,arr[i].dead);
        }
        vector<int>schedule(maxDeadline+1,-1);
        sort(arr,arr+n,[&](Job &a,Job &b)
        {
            return a.profit>b.profit;
        });
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead;j>=1;j--)
            {
                if(schedule[j]==-1)
                {
                    schedule[j]=arr[i].id;
                    count++;
                    lav+=arr[i].profit;
                    break;
                }
            }
        }
        return {count,lav};
    } 
};