class Solution {
public:
    long long ans(vector<int>& nums,int target){
        int left=0;
        int right=nums.size()-1;
        long long count=0;
        while(left<right){
            if(nums[left]+nums[right]<=target){
                count+=right-left;
                left++;
            }
            else{
                right--;
            }
        }
        return count;
    }
    long long countFairPairs(vector<int>& nums,int lower,int upper) {
        sort(nums.begin(),nums.end());
        long long res1=ans(nums,upper);
        long long res2=ans(nums,lower-1);
        return res1-res2;
    }
};