class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n,-1);
        if(2*k>=n){
            return ans;
        }
        long long suml=0;
        long long sumr=0;
        int avg=0;
        for(int i=0;i<k;i++){
            suml+=nums[i];
            sumr+=nums[k+i+1];
        }
        for(int i=k;i+k<n;i++){
                avg=(suml+sumr+nums[i])/(2*k+1);
                ans[i]=avg;
            if(i+k+1<n){
                suml-=nums[i-k];
                sumr-=nums[i+1];
                suml+=nums[i];
                sumr+=nums[i+k+1];
            }
        }
            
        return ans;
    }
};