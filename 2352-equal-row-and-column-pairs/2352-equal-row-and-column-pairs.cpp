class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        map<vector<int>,int>row,col;
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int>v;
            for(int j=0;j<n;j++){
                v.push_back(grid[i][j]);
            }
            row[v]++;
        }
        for(int j=0;j<n;j++){
            vector<int>v;
            for(int i=0;i<n;i++){
                v.push_back(grid[i][j]);
            }
            col[v]++;
        }
        for(auto it:row){
            ans+=it.second*col[it.first];
        }
        return ans;
    }
};
