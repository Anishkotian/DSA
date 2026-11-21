class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        int r=0,c=0;
        vis[0][0]=1;
        while(1){
            int x=r,y=c;
            if(grid[r][c]=='L')y--;
            if(grid[r][c]=='R')y++;
            if(grid[r][c]=='U')x--;
            if(grid[r][c]=='D')x++;
            if(x<0||x>=m||y<0||y>=n||vis[x][y]==1){
                break;
            }
            r=x;
            c=y;
            vis[r][c]=1;
        }
        return {r,c};
    }
};