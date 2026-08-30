class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=0;
        int maxi=0;
        int n=nums.size();
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[mini]){
            mini=i;
            }
            if(nums[i]>nums[maxi]){
            maxi=i;
            }
        }
        int left=min(mini,maxi);
        int right=max(mini,maxi);
        return min({right+1,n-left,left+1+n-right});
    }
};