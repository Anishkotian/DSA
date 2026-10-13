class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>s(n,0);
        long long ans=0;
        for(int i=0;i<n;i++){
            s[i]=nums[i]*nums[i];
            ans+=s[i];
        }
        sort(s.begin(),s.end());
        long long res=0;
        for(int i=0;i<n/2;i++){
            res+=s[i];

        }

        return ans-2*res;

        
    }
};