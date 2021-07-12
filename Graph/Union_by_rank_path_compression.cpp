//Time Complexity : O(4a) = O(4) ~ Constant
//Space Complexity : O(N)
int parent[100000];
int rank[1000000];
void makeset()
{
	for(int i=1;i<=n;i++)
	{
		parent[i] = i;
		rank[i] = 0;
	}
	//first step to make the rank of all the number as 0. And make parent og all node as they themselves.
}
int findpar(int node)
{
	if(node==parent[node])
	{
		return node;
	}
	return parent[node] = findpar[parent[node]];
}
void union(int u, int v)
{
	u = findpar(u);
	v = findpar(v);
		if(rank[u]<rank[v])
		{
			parent[u] = v;
		}
		else if(rank[v] < rank[u])
		{
			parent[v] = u;
		}
		else
		{
			rank[v]  =u;
			rank[u]++;
		}
}
 void main()
 {
 	makeset();
 	//for m operation
 	int n;
 	cin>>m;
 	while(m--)
 	{
 		int u, v;
 		cin>>u>>v;
 		union(u,v);
 	}
 	//find if u and v belong to same component or not then
 	if(findpar(u)==findpar(v))
 		cout<<"Yes";
 	else
 		cout<,"No";
 }