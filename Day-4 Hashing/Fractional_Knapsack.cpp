class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
   static bool myCmp(Item a, Item b)
    {
        double r1 = double(a.value)/(a.weight);
        double r2 = double(b.value)/(b.weight);
        return r1>r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr+n, myCmp);
        double res = 0.0;
        for(int i=0;i<n;i++)
        {
            if(arr[i].weight<=W){
            res+=arr[i].value;
            W = W-arr[i].weight;
        }
            else
            {
                res+=arr[i].value*((double)W/arr[i].weight);
                break;
            }
        }
        return res;
    }
        
};

/* 
    Space Complexity : O(N)
    Time Complexity  : O(NLogN)

*/

