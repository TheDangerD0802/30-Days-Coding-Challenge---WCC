class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int ans = 0 , min = arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]<min)
                min = arr[i];
            
            else if(ans < arr[i]-min)
                ans = arr[i]-min;
        }
        return ans;
    }
};

/*

    You just need to find minimum of the array and after that minimum ,
    highest value s as to maximize the profit.

*/