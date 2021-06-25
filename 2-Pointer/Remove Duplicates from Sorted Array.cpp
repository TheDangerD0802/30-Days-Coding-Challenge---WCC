class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n = a.size();
        if(n==0)
            return 0;
        int i = 0;
        for(int j=0;j<n;j++)
        {
            if(a[j]!=a[i])
            {
                i++;
                a[i] = a[j];
            }
           
        }
        return (i+1);
    }
};