class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
        // code here
        vector<int> ans(n);
 
    // Creating a min-heap using priority queue
    priority_queue<int, vector<int>, greater<int> > pq;
 
    // Iterating through each element
    for (int i = 0; i < n; i++) {
        // If size of priority
        // queue is less than k
        if (pq.size() < k)
            pq.push(arr[i]);
        else {
            if (arr[i] > pq.top()) {
                pq.pop();
                pq.push(arr[i]);
            }
        }
 
        // If size is less than k
        if (pq.size() < k)
            ans[i] = -1;
        else
            ans[i] = pq.top();
    }
 
    return ans;
    }
};