class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool possible(int mid, int arr[], int n, int m)
    {
        int stud = 0;
        int pages = 0;
        for(int i=0;i<n;i++)
        {
            if(pages+arr[i]>mid)
            {
                stud++;
                pages = arr[i];
                if(pages>mid) return false;
            }
            else
            {
                pages+=arr[i];
            }
        }
        if(stud < m) return true;
        else
        return false;
    }
    int findPages(int arr[], int n, int m) 
    {
        //code here
        int low = *min_element(arr,arr+n);
        int high = 0;
        for(int i=0;i<n;i++)
        {
            high +=arr[i];
        }
        int res = -1;
        while(low<=high)
        {
            int mid = (low + high)>>1;
            if(possible(mid,arr,n,m))
            {
                res = mid;
                high = mid-1;
            }
            else
            low = mid+1;
        }
        
        return res;
    }
};