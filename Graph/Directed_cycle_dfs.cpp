class Solution
{
    bool dfscheck(vector<int> adj[], int i, int vis[], int dfsvis[])
    {
        vis[i] = 1;
        dfsvis[i] = 1;
        for(auto x:adj[i])
        {
            if(!vis[x]){
            if(dfscheck(adj,x,vis,dfsvis))
            return true;
            } 
            else if(dfsvis[x])
            return true;
        }
        dfsvis[i] = 0;
        return false;
    }
    public:
	//Function to detect cycle in a directed graph.
	bool isCyclic(int N, vector<int> adj[]) 
	{
	   	// code here
	   int vis[N], dfsVis[N]; 
	   memset(vis, 0, sizeof vis); 
	   memset(dfsVis, 0, sizeof dfsVis); 
	   	for(int i=0;i<N;i++)
	   	{
	   	    if(!vis[i])
	   	    {
	   	        if(dfscheck(adj,i,vis,dfsVis))
	   	        return true;
	   	    }
	   	}
	   	return false;
	}
};