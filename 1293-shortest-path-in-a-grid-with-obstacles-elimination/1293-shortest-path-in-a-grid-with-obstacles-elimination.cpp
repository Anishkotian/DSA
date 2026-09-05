class Solution{
public:
    int shortestPath(vector<vector<int>>&grid,int k){
        int m=grid.size();
        int n=grid[0].size();
        queue<vector<int>>q;
        vector<vector<int>>vis(m,vector<int>(n,-1));
        q.push({0,0,0});
        vis[0][0]=0;
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        int d=0;
        while(!q.empty()){
            int s=q.size();
            while(s--){
                vector<int>a=q.front();
                q.pop();
                int x=a[0];
                int y=a[1];
                int z=a[2];
                if(x==m-1&&y==n-1){
                    return d;
                }
                for(int i=0;i<4;i++){
                    int nx=x+dx[i];
                    int ny=y+dy[i];
                    if(nx<0||nx>=m||ny<0||ny>=n){
                        continue;
                    }
                    int nz=z+grid[nx][ny];
                    if(nz>k){
                        continue;
                    }
                    if(vis[nx][ny]!=-1&&vis[nx][ny]<=nz){
                        continue;
                    }
                    vis[nx][ny]=nz;
                    q.push({nx,ny,nz});
                }
            }
            d++;
        }
        return -1;
    }
};