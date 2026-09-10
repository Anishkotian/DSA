class Solution {
public:
    vector<int> resultsArray(vector<int>& nums,int k) {
        vector<int>ans;
        int count=0;
        if(k==1){
            return nums;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                count++;
            }
            else{
                count=0;
            }
            if(i>=k-1){
                if(count>=k-1){
                    ans.push_back(nums[i]);
                }
                else{
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};