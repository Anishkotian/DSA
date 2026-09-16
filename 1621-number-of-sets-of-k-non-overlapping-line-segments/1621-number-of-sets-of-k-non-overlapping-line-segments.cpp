class Solution {
public:
    long long power(long long a,long long b,long long mod){
        long long ans=1;
        while(b>0){
            if(b%2==1){
                ans=ans*a%mod;
            }
            a=a*a%mod;
            b/=2;
        }
        return ans;
    }
    int numberOfSets(int n,int k) {
        long long mod=1000000007;
        long long ans=1;
        int nn=n+k-1;
        int r=2*k;
        for(int i=1;i<=r;i++){
            ans=ans*(nn-r+i)%mod;
            ans=ans*power(i,mod-2,mod)%mod;
        }
        return ans;
    }
};