class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long mi = arr[0];
	    long long ma = arr[0];
	    long long product = arr[0];
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]<0)
	        swap(mi,ma);
	        ma = max((long long)arr[i],ma*arr[i]);
	        mi = min((long long)arr[i],mi*arr[i]);
	        if(ma>product)
	        product = ma;
	    }
	    return product;
	}
};