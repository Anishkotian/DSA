class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<operations.size();i++){
            int old=operations[i][0];
            int ne=operations[i][1];
            int ind=mp[old];
            nums[ind]=ne;
            mp[ne]=ind;
            mp.erase(old);
        }
        return nums;  
    }
};