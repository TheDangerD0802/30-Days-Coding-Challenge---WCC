class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int N, vector<int> g[])
	{
			vector<int> visited(N, 0);
			queue<int> q;
			vector<int> result;

			q.push(0);
			while(!q.empty())
			{
			int u = q.front();
			q.pop();
			result.push_back(u);
			for(auto e : g[u])
			{
			if(visited[e] == false)
			{
			q.push(e);
			visited[e] = true;
			}
			}
			}
			return result;
	}
};