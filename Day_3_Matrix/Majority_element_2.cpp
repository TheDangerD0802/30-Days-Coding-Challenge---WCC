/*

	Do the traversal and count the element , then give the answer.
	Second approach : Use hash_map , keep frequency So there is O(N) space complexity.
	Third Approach : Usinf Moore Voting Algorithm.
	 Here we will use num1 and num2 and same algorithm as maximum element1.
*/

void solve(vector<int> arr, int n)
{
	int num1 = -1, num2 = -1;
	int count1 = 0, count2 = 0 , i;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==num1)
		{
			count++;
		}
		else if(arr[i]==num2)
		{
			count2++;
		}
		else if(count1 == 0)
		{
			num1 = arr[i];
			count1 = 1;
		}
		else if(count2 == 0)
		{
			num2 = arr[i];
			count2 = 1;
		}
		else
		{
			count2--;
			count1--;
		}

	}
	count1 = 0 ;
	count2 = 0 ;
	for(int i=0;i<n;i++)
	{
		if(arr[i] == num1)
		{
			count1++;
		}
		else if(arr[i] == num2)
		{
			count2++;
		}
	}

	if(count1 > n/3)
	{
		cout<<num1<<endl;
	}
	if(count2 > n/3)
	{
		cout<<num2<<endl;
	}
}