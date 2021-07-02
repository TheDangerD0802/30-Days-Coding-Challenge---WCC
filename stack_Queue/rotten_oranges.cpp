struct node{
    int x;
    int y;
    int t;
    node(int x, int y, int t)
    {
        this->x = x;
        this->y = y;
        this->t = t;
    }
    
};

class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        queue<node*> q;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==2)
                {
                    q.push(new node(i,j,0));
                }
            }
        }
        int x1[4] = {-1,0,1,0};
        int y1[4] = {0,-1,0,1};
        int res = 0;
        while(!q.empty())
        {
            node* n =q.front();
            q.pop();
            res = max(res,n->t);
            for(int i=0;i<4;i++){
            int r = n->x+x1[i];
            int c = n->y+y1[i];
            {
                if(r>=0 && r<grid.size() && c>=0 && c<grid[r].size() && grid[r][c] ==1)
                {
                    grid[r][c] = 2;
                    q.push(new node(r,c,n->t+1));
                }
            }
            }
        }
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
        {
            if(grid[i][j]==1)
            return -1;
        }
        }
        return res;
    }
};
