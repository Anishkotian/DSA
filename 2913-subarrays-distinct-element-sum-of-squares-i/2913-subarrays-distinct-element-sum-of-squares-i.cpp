class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            unordered_set<int>s;
            for(int j=i;j<n;j++){
                if(s.find(nums[j])==s.end()){
                    s.insert(nums[j]);
                    sum++;
                }
                ans+=(sum*sum);
            }
        }
        return ans;
    }
};