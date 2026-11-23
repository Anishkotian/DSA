class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        int x=1;
        int srow=0,scol=0,erow=n-1,ecol=n-1;
        while(erow>=srow&&ecol>=scol){
            for(int i=scol;i<=ecol;i++){
                ans[srow][i]=x;
                x++;
            }
            for(int i=srow+1;i<=erow;i++){
                ans[i][ecol]=x;
                x++;
            }
            for(int i=ecol-1;i>=scol;i--){
                ans[erow][i]=x;
                x++;
            }for(int i=erow-1;i>=srow+1;i--){
                ans[i][scol]=x;
                x++;
            }
            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return ans;
    }
};