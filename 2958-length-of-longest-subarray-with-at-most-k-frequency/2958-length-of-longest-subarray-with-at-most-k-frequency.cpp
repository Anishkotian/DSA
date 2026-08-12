class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int n=nums.size();
        int maxi=0;
        unordered_map<int,int>mp;
        for(r=0;r<n;r++){
            mp[nums[r]]++;
            while(mp[nums[r]]>k&&l<n){
                mp[nums[l]]--;
                l++;
            }
            maxi=max(r-l+1,maxi);

        }
        return maxi;
    
    }
};