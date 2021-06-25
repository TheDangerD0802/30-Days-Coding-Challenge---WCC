class Solution {
public:
    int trap(vector<int>& arr) {
        int leftMax = 0, rightMax = 0;
        int n = arr.size();
                int left = 0, right = n-1;
                        
                int total = 0;
                while(left < right)
                {

                leftMax = max(leftMax, arr[left]);
                rightMax = max(rightMax, arr[right]);
                if(leftMax > rightMax)
                {
                total += rightMax - arr[right];
                right--;
                }
                else
                {
                total += leftMax - arr[left];
                left++;
                }
                }
                return total;
    }
};