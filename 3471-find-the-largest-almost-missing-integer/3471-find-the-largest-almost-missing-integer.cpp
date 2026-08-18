class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int x:nums){
            mp[x]++;
        }
        if(k==n){
            return *max_element(nums.begin(), nums.end());
        }
        if(k==1){
            int ans=-1;
            for(int x:nums){
                if(mp[x]==1){
                ans=max(ans,x);
        }
    }
    return ans;
}
        int ans=-1;
        if(mp[nums[0]]==1){
            ans=max(ans,nums[0]);
        }
        if(mp[nums[n-1]]==1){
            ans=max(ans,nums[n-1]);
        }

        return ans;
    }
};