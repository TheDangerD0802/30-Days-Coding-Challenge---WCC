class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='{' || x[i]=='(' || x[i] == '[')
            s.push_back(x[i]);
            if (s.empty()) 
		return false; 

		switch (expr[i]) 
		{ 
		case ')': 

			// Store the top element in a 
			x = s.top(); 
			s.pop(); 
			if (x=='{' || x=='[') 
				return false; 
			break; 

		case '}': 

			// Store the top element in b 
			x = s.top(); 
			s.pop(); 
			if (x=='(' || x=='[') 
				return false; 
			break; 

		case ']': 

			// Store the top element in c 
			x = s.top(); 
			s.pop(); 
			if (x =='(' || x == '{') 
				return false; 
			break; 
		} 
	} 

	// Check Empty Stack 
	return (s.empty());
        }
    }

};