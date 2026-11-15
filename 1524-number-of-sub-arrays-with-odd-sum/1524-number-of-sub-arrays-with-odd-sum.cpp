class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int odd=0,even=1;
        int sum=0,ans=0;
        int mod=1e9+7;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum%2==1){
                ans=(ans+even)%mod;
                odd++;
            }
            else{
                ans=(ans+odd)%mod;
                even++;
            }
        }
        return ans;
    }
};
