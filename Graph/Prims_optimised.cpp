class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int N, vector<vector<int>> adj[])
    {
        // code here
        int ans = 0;
        int parent[N+1];
        int key[N+1];
        bool mstSet[N+1];
        for (int i = 0; i <= N; i++) 
            key[i] = INT_MAX, mstSet[i] = false; 
       priority_queue< pair<int,int>, vector <pair<int,int>> , greater<pair<int,int>> > pq;
    
        key[0] = 0; 
        parent[0] = -1; 
        pq.push({0, 0});
        while(!pq.empty())
        { 
            int u = pq.top().second; 
            pq.pop(); 
            
            mstSet[u] = true; 
            
            for (auto it : adj[u]) {
                int v = it[0];
                int weight = it[1];
                if (mstSet[v] == false && weight < key[v]) {
                    parent[v] = u;
    		key[v] = weight; 
                    pq.push({key[v], v});    
                }
            }
                
        }
        int sum = 0;
        for(int i = 1;i<=N;i++) {
            if(key[i] != INT_MAX) sum += key[i];
        }
        return sum; 
    }
};