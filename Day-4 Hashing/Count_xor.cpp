/*
Brute : Generate all subarray and calulate their xor value.
Optimized : Prefix_Xor 

1) Initialize ans as 0.
2) Compute xorArr, the prefix xor-sum array.
3) Create a map mp in which we store count of 
   all prefixes with XOR as a particular value. 
4) Traverse xorArr and for each element in xorArr
   (A) If m^xorArr[i] XOR exists in map, then 
       there is another previous prefix with 
       same XOR, i.e., there is a subarray ending
       at i with XOR equal to m. We add count of
       all such subarrays to result. 
   (B) If xorArr[i] is equal to m, increment ans by 1.
   (C) Increment count of elements having XOR-sum 
       xorArr[i] in map by 1.
5) Return ans.  

Time : O(N) , Space : O(N)
*/
int maxLen(int arr[], int B, int n)
{
    // Your code here
    map<int, int> mp;
    int maxi=0;
    int xorr = 0;
    for(int i=0;i<n;i++)
    {
        xorr = xorr^arr[i];
        if(xorr==B)
        {
        	maxi++;
        }
        if(mp.find(xorr^B)!=mp.end())
        {
        	cnt+= mp[xorr^B];
        }
        mp[xorr]+=1;
    }
    return maxi;
}
