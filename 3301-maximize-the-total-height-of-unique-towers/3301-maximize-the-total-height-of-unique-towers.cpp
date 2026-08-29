class Solution {
public:
    long long maximumTotalSum(vector<int>&sim) {
        sort(sim.begin(),sim.end());
        int n=sim.size();
        long long  ans=0;
        ans+=sim[n-1];
        for(int i=n-2;i>=0;i--){
            if(sim[i]>=sim[i+1]){
                sim[i]=sim[i+1]-1;
            }
            if(sim[i]<=0){
                return -1;
            }
            ans+=sim[i];
        }
        return ans;
    }
};