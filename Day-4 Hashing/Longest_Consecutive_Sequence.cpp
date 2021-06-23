/*

Brute Force is : sort the array and find the consecutive element.
Time : O(NlogN)
Space : O(1)
Optimized :  
Use hash set and first check for less number. After that if not found then check for greater consecutive.
This minimize the traversal .
Time : O(3N) Space  : O(N)
*/

int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      set<int> s;
      for(int i=0;i<n;i++)
      {
          s.insert(arr[i]);
      }
      int ans = 0;
      for(int i=0;i<n;i++)
      {
          if(!s.count(arr[i]-1))
          {
              int curr  = arr[i];
              int str = 1;
              while(s.count(curr+1))
              {
                  curr++;
                  str++;
              }
              ans = max(str,ans);
          }
      }
      return ans;
    }
