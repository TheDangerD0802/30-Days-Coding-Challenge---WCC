class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    bool cycledfs(vector<int> vis, vector<int> adj[],int par,   int i)
    {
        
        vis[i] = true;
        for(auto x:adj[i])
        {
            if(!vis[x])
            {
                if(cycledfs(vis,adj,i,x)) return true;
            }
            else if(x!=par)
            {
                return true;
            }
        }
        return false;
        
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int> vis(V+1,0);
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            if(cycledfs(vis,adj,-1,i)) return true;
	        }
	    }
	    return false;
	}
};