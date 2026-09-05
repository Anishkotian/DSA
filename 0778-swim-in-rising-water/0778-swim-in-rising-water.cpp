class Solution{
public:
    int swimInWater(vector<vector<int>>&grid){
        int n=grid.size();
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
        vector<vector<int>>vis(n,vector<int>(n,0));
        pq.push({grid[0][0],0,0});
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        while(!pq.empty()){
            vector<int>a=pq.top();
            pq.pop();
            int t=a[0];
            int x=a[1];
            int y=a[2];
            if(vis[x][y]){
                continue;
            }
            vis[x][y]=1;
            if(x==n-1&&y==n-1){
                return t;
            }
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx<0||nx>=n||ny<0||ny>=n||vis[nx][ny]){
                    continue;
                }
                int nt=max(t,grid[nx][ny]);
                pq.push({nt,nx,ny});
            }
        }
        return -1;
    }
};