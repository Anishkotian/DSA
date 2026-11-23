class Solution {
public:
   void bfs(int row,int col,vector<vector<char>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        q.push({row,col});
        grid[row][col]='0';
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
          for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                     if(abs(i)+abs(j)!=1)
                        continue;
                    int nr=r+i;
                    int nc=c+j;
                    if(nr>=0&&nc>=0&&nr<n&&nc<m&&grid[nr][nc]=='1'){
                        grid[nr][nc]='0';
                        q.push({nr,nc});
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    bfs(i,j,grid);
                }
            }
        }
        return count;
    }
};