/*
	Use of Hashset 
	if (pi to p2 ) is correct then search for (p1,p2+1) or (p1+1, p2).
	so we either have to move p1 ,
	otherwise p2 will move.
*/
/*
Psedo code
int length_sub(string str)
{
	unordered_set<char> s;
	s.insert(str[0]);
	int p1 = 0, p2 = 1;
	int ans = 0;
	//we try to insert p2
	while(we traverse the string)
	if(s.find()==s.end())
	{
		//p1 to p2 it contain distinct element
		s.insert(str[p2]);
		p2++;
		ans = max(ans,s.size());
	}
	else
	{
		//if from p1 to p2 
		s.remove(str[p1]);
	}
	return ans;
}
proper Code
*/
int longestUniqueSubsttr(string str)
{
     map<char, int> seen ;
    int maximum_length = 0;
 
    // Starting the inital point of window to index 0
    int start = 0;
 
    for(int end = 0; end < s.length(); end++)
    {
         
        // Checking if we have already seen the element or
        // not
        if (seen.find(s[end]) != seen.end())
        {
             
            // If we have seen the number, move the start
            // pointer to position after the last occurrence
            start = max(start, seen[s[end]] + 1);
        }
 
        // Updating the last seen value of the character
        seen[s[end]] = end;
        maximum_length = max(maximum_length,
                             end - start + 1);
    }
    return maximum_length;

}