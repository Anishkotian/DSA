class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        int n=nums.size();
        int i;
        unordered_set<int>s(nums.begin(),nums.end());
        for(i=1;i<n;i++){
            if(nums[i]!=nums[i-1]+1){
                break;
            }else{
                sum+=nums[i];
            }
        }
        int ans=sum;
        while(1){
            if(s.find(ans)==s.end()){
                return ans;
            }else{
                ans++;
            }
        }
        return -1;
    }
};