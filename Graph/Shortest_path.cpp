void shortestpath(vector<int> adj[], int V)
{
	vector<int> dist(V, INT_MAX);
	queue<int> q;
	q.push(0);
	dist[0] = 0;
	while(!q.empty())
	{
		int n = q.front();
		q.pop();
		for(auto x:adj[n])
		{
			if(dist[x]>dist[n]+1)
			{
				dist[x] = dist[x]+1;
				q.push(x);
			}

		}
	}
	for(auto x:dist[V])
	{
		cout<<x<<" ";
	}

}