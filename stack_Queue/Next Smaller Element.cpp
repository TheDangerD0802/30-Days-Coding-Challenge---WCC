class Solution{
public:	
	void immediateSmaller(int *arr, int n) {
	    //  code here
	   stack<int>st;
st.push(-1);
for(int i = n-1;i > 0;i--){
if(arr[i] < arr[i-1]){
st.push(arr[i]);
}
else{
st.push(-1);
}
}
for(int i = 0;i < n;i++){
arr[i] = st.top();
st.pop();
}
	}

};
