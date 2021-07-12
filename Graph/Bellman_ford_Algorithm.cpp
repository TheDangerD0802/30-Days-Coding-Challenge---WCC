/*
	It work for negative cases , but if there is negative cycle then we cant find shortest path.
	It is also helpful in telling if the graph has a negative cycle or not.
	1. Undirected Graph need to be completed in a directerd graph.
	2. for directed both negative cycle + positive cycle it support.
	Algorithm:
		1. Relax all the edge N-1 times. 
		{
			Relaxtion Means : Check if dist[u] + wt < dist[v] :- dist[v] = dist[u] + wt
			Then do this dist[v] = dist[u] + wt , first this will be for index 0 since it only have 0 as distance.
			Now after this all dist[i] get updated.
			Above step is for 1 time ,but we have to do this for N-1 times. 
		}
		2. How do get if there is a negative cycle : 
		{
			Try to relax it one more time, if after doing 1 more relation then having smallest distance array means it has negative cycle.
		}
		** longest Path any node can have from source can be N-1.So relaxtion start from node 0, and update value from source to end at least N-1 times relaxation is needed.
		Time Complexity : O(N-1) * O(E)
		Space Complexity : O(N)

*/
#include<bits/stdc++.h>
using namespace std;
struct node {
    int u;
    int v;
    int wt; 
    node(int first, int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

int main(){
    int N,m;
    cin >> N >> m;
    vector<node> edges; 
    for(int i = 0;i<m;i++) {
        int u, v, wt;
        cin >> u >> v >> wt; 
        edges.push_back(node(u, v, wt)); 
    }

    int src;
    cin >> src; 


    int inf = 10000000; 
    vector<int> dist(N, inf); 

    dist[src] = 0; 

    for(int i = 1;i<=N-1;i++) {
        for(auto it: edges) {
            if(dist[it.u] + it.wt < dist[it.v]) {
                dist[it.v] = dist[it.u] + it.wt; 
            }
        }
    }

    int fl = 0; 
    for(auto it: edges) {
        if(dist[it.u] + it.wt < dist[it.v]) {
            cout << "Negative Cycle"; 
            fl = 1; 
            break; 
        }
    }

    if(!fl) {
        for(int i = 0;i<N;i++) {
            cout << i << " " << dist[i] << endl;
        }
    }
