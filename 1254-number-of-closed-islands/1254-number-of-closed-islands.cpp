class Solution {
public:
    int dfs(vector<vector<int>>&grid,int i,int j){
        int m=grid.size(),n=grid[0].size();
        if(i<0||j<0||i>=m||j>=n){
            return 0;
        }
        if(grid[i][j]==1){
            return 1;
        }
        grid[i][j]=1;
        int a=dfs(grid,i+1,j);
        int b=dfs(grid,i-1,j);
        int c=dfs(grid,i,j+1);
        int d=dfs(grid,i,j-1);
        return a==1&&b==1&&c==1&&d==1;
    }
    int closedIsland(vector<vector<int>>&grid){
        int m=grid.size(),n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    if(dfs(grid,i,j)==1)
                        count++;
                }
            }
        }
        return count;
    }
};