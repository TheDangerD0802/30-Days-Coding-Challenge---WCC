class Solution {
public:
   void recFloodFill(vector<vector<int>> &image, int i, int j, int newc, int oldc)
{
if(i >= image.size() || i < 0 || j >= image[0].size() || j < 0)
return;
if(image[i][j] != oldc || image[i][j] == newc)
return;
image[i][j] = newc;
recFloodFill(image, i+1, j, newc, oldc);
recFloodFill(image, i, j+1, newc, oldc);
recFloodFill(image, i-1, j, newc, oldc);
recFloodFill(image, i, j-1, newc, oldc);
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
{
// Code here
recFloodFill(image, sr, sc, newColor, image[sr][sc]);
return image;
}
};