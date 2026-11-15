class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int mini=nums[i];
            int sum=-1;
            for(int j=i;j<n;j++){
                mini=min(mini,nums[j]);
                sum&=nums[j];
                if(sum==mini){
                    ans++;
                }
            }
        }
        return ans;
    }
};