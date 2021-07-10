class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    bool cyclebfs(vector<int> vis, vector<int> adj[], int i)
    {
        queue<pair<int,int>> q;
        q.push({i,-1});
        vis[i] = true;
        while(!q.empty())
        {
            int node = q.front().first;
            int par = q.front().second;
            q.pop();
            for(auto x:adj[node])
            {
                if(!vis[x])
                {
                    vis[x] = true;
                    q.push({x,node});
                }
                else if(par!=x)
                {
                    return true;
                }
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
	            if(cyclebfs(vis,adj,i)) return true;
	        }
	    }
	    return false;
	}
};