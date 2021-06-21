class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long n)
    {
  return mergeSort(arr,0,n-1);
    }
long long mergeSort(long long a[], long long int s,long long int e){
if(s>=e) return 0;
long long int m=s+(e-s)/2;
long long int i=s,j=m+1;
long long int c=mergeSort(a,s,m)+mergeSort(a,m+1,e);
while(i<=m)
{
while(j<=e&&a[i]>a[j]) j++;
c+=j-(m+1);
i++;
}
sort(a+s,a+e+1);
return c;
}
};
/*

  While merging , dhek right side wale division mei se element agar choose kr rahe
  h tho left side wale division ke baache hue saare element condition follow karenge, 
  so inversion count ke answer mei bhi include honge.
  Here array get sorted. So if u don't want then make copy of an array.

*/