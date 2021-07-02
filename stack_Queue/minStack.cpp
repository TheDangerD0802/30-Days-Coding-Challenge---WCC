void push(stack<int>& s, int a){
	// Your code goes here
	if(s.size()==0)
    s.push(a);
    else
    {
    int p=s.top();
    s.pop();
    int q=max(a,p);
    int r=min(a,p);
    s.push(q);
    s.push(r);
    }
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n)
	return true;
	else
	return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return (s.empty());
}

int pop(stack<int>& s){
	// Your code goes here
	if(s.size()!=0)
    {
    int k=s.top();
    s.pop();
    return k;
    }
    
    return -1;
}

int getMin(stack<int>& s){
	// Your code goes here
	return s.top();
}