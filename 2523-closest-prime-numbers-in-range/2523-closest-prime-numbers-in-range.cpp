
class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool>prime(right+1,true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i*i<=right;i++){
            if(prime[i]==true){
                for(int j=i*i;j<=right;j+=i){
                    prime[j]=false;
                }
            }
        }
        int prev=-1;
        int mindiff=INT_MAX;
        vector<int>ans={-1,-1};
        for(int i=max(2,left);i<=right;i++){
            if(prime[i]==true){
                if(prev!=-1){
                    int diff=i-prev;
                    if(diff<mindiff){
                        ans={prev,i};
                    }
                    mindiff=min(mindiff,diff);
                }
                prev=i;
            }
        }
        return ans;
    }
};
