class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    /* We have to find nth root of M.
	        Here we see a monotonic function (exponentially) increasing,
	        so here we use binary search
	    */
	//STL CODE
	int res=round(pow(m,1.0/n));
    if(pow(res,n)==m)
    return res;
    else
    return -1;
	    
	}  
};

/* Code -2*/ 
#include <bits/stdc++.h>
using namespace std;
double multiply(double number, int n) {
    double ans = 1.0;
    for(int i = 1;i<=n;i++) {
        ans = ans * number;
    }
    return ans; 
}

double getNthRoot(int n, int m) {
    double low = 1;
    double high = m;
    double eps = 1e-6; //diffrence between low and high is this small then , if this situation fails then high and low are so close that they will approx. generate thr nth-root.
    
    while((high - low) > eps) {
        double mid = (low + high) / 2.0; 
        if(multiply(mid, n) < m) {
            low = mid; 
        }
        else {
            high = mid; 
        }
    }
    
    cout << low << " " << high << endl; 
    
    // just to check
    cout << pow(m, (double)(1.0/(double)n)); 
}
int main() {
	int n, m;
	cin >> n >> m; 
	getNthRoot(n, m); 
	return 0;
}