/*
Do xor of all element
t.c = O(N)
*/
//optimzed
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n= arr.size();
        int start = 0, end = n-1;
    
    while(start < end){
        int mid = start + (end - start) / 2;

        if((mid % 2 == 0) && arr[mid] == arr[mid + 1] 
                || (mid % 2 != 0) && arr[mid] == arr[mid - 1])
            start = mid + 1;
        
        else
            end = mid;
    }
    
    return arr[start];
    }
};