 void dfs(vector<int> vis, vector<int> adj[], stack<int> &topo,  int node)
    {
        vis[node] = 1;
        for(auto x:adj[node])
        {
            if(!vis[node])
            dfs(vis,adj,topo,x);
        }
        topo.push(node);
    }
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int> topo;
	    vector<int> vis(V,0);
	    vector<int> ans;
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            dfs(vis,adj,topo,i);
	        }
	    }
	    int i=0;
	    while(!topo.empty())
	    {
	        ans.push_back(topo.top());
	       
	        topo.pop();
	    }
	    return ans;
	}