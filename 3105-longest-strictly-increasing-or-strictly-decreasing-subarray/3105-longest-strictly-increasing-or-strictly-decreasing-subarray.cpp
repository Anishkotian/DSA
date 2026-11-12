class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int c1=1;
        int c2=1;
        int max1=0;
        int max2=0;
        if(nums.size()==1){
            return 1;
        }
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                c1=1;
            }
            else{
                c1++;
            }
            max1=max(max1,c1);
        }
        for(int i=1;i<n;i++){
            if(nums[i]>=nums[i-1]){
                c2=1;
            }
            else{
                c2++;
            }
            max2=max(max2,c2);
        }
        return max(max1,max2);
    }
};