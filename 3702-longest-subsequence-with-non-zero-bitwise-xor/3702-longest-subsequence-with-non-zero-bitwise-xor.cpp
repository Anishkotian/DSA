class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int zero=0;
        int n=nums.size();
        int ans=0;
        for(int num:nums){
            ans=ans^num;
            if(num==0){
                zero++;
            }
        }
        if(zero==n){
            return 0;
        }
        if(ans!=0){
            return n;
        }
        return n-1;
    }
};