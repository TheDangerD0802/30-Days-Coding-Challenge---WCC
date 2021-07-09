class Solution
{
    priority_queue<int> max;
    priority_queue<int, vector<int>, greater<int>> min;
    public:
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(max.empty() == true)
        {
            max.push(x);
            return;
        }
        
    	if(max.size() > min.size())
    	{
    	    if(max.top() > x)
    	    {
    	        min.push(max.top());
    	        max.pop();
    	        max.push(x);
    	    }
    	    else
    	    {
    	        min.push(x);
    	    }
    	}
    	else
    	{
    	    if(x < max.top())
    	    {
    	        max.push(x);
    	    }
    	    else
    	    {
    	        min.push(x);
    	        max.push(min.top());
    	        min.pop();
    	    }
    	}
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(max.size() > min.size())
    	{
    	    return max.top();
    	}
    	else
    	{
    	    return (max.top() + min.top()) / 2.0;
    	}
    }
};
