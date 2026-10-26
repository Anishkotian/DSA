
class Solution {
public:
    int m,n;
    int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    long long dfs(vector<vector<int>>&grid,int i,int j){
        if(i<0||j<0||i>=m||j>=n||grid[i][j]==0){
            return 0;
        }
        long long sum=grid[i][j];
        grid[i][j]=0;
        for(auto& d:dir){
            sum+=dfs(grid,i+d[0],j+d[1]);
        }
        return sum;
    }
    int countIslands(vector<vector<int>>& grid,int k) {
        m=grid.size();
        n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]>0){
                    long long sum=dfs(grid,i,j);
                    if(sum%k==0){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
