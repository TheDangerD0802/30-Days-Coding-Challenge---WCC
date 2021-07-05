// C++ program for getting minimum character to be
// added at front to make string palindrome
#include <bits/stdc++.h>
using namespace std;

// returns vector lps for given string str
vector<int> computeLPSArray(string str)
{
	int M = str.length();
	vector<int> lps(M);

	int len = 0;
	lps[0] = 0; // lps[0] is always 0

	// the loop calculates lps[i] for i = 1 to M-1
	int i = 1;
	while (i < M)
	{
		if (str[i] == str[len])
		{
			len++;
			lps[i] = len;
			i++;
		}
		else // (str[i] != str[len])
		{
			// This is tricky. Consider the example.
			// AAACAAAA and i = 7. The idea is similar
			// to search step.
			if (len != 0)
			{
				len = lps[len-1];

				// Also, note that we do not increment
				// i here
			}
			else // if (len == 0)
			{
				lps[i] = 0;
				i++;
			}
		}
	}
	return lps;
}

// Method returns minimum character to be added at
// front to make string palindrome
int getMinCharToAddedToMakeStringPalin(string str)
{
	string revStr = str;
	reverse(revStr.begin(), revStr.end());

	// Get concatenation of string, special character
	// and reverse string
	string concat = str + "$" + revStr;

	// Get LPS array of this concatenated string
	vector<int> lps = computeLPSArray(concat);

	// By subtracting last entry of lps vector from
	// string length, we will get our result
	return (str.length() - lps.back());
}

// Driver program to test above functions
int main()
{
	string str = "AACECAAAA";
	cout << getMinCharToAddedToMakeStringPalin(str);
	return 0;
}


//Second Approach : Dynamic Programming:
class Solution {
    public:
int lcs(string  X, string  Y, int m, int n)
    {
        int t[m+1][n+1];
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0||j==0)
                    t[i][j]=0;
                else if(X[i-1]==Y[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[m][n];
    }
    int minInsertions(string s) {
        string b;
        b=s;
        reverse(b.begin(),b.end());
        int len=s.length();
        int x=lcs(s,b,len,len);
        return len-x;
    }
};