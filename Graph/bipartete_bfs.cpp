class Solution {
    bool check(vector<vector<int>> graph, vector<int> color, int i)
    {
        queue<int> q;
        q.push(i);
        color[i] = 1;
        while(!q.empty())
        {
            int n = q.front();
            q.pop();
            for(auto x:graph[n])
            {
                if(color[x]==-1)
                { 
                    color[x] = 1 - color[n];
                    q.push(x);
                }
                else if(color[x] == color[n])
                    return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n,-1);
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                if(!check(graph,color,i))
                    return false;
            }
         }
        return true;
    }
};