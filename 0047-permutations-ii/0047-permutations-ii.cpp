class Solution {
public:
    void ans(vector<int>& nums,vector<vector<int>>&final,vector<int>&vis,vector<int>&res){
        if(res.size()==nums.size()){
            final.push_back(res);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]&&vis[i-1]==0)continue;
            if(vis[i]==0){
                res.push_back(nums[i]);
                vis[i]=1;
                ans(nums,final,vis,res);
                res.pop_back();
                vis[i]=0;
            }
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        vector<vector<int>>final;
        vector<int>res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>vis(n,0);
        ans(nums,final,vis,res);
        return final;
        
    }
};