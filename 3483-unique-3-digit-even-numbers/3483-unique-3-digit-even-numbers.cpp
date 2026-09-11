class Solution {
public:
    int fact(int n){
        int ans=1;
        for(int i=1;i<=n;i++){
            ans*=i;
    }
        return ans;
    }

    int totalNumbers(vector<int>& digits) {
        unordered_map<int,int>mp;
        for(int x:digits){
            mp[x]++;
        }
        int ans=0;
        for(int l=0;l<=8;l+=2){
            if(mp[l]==0){
                continue;
            }
            mp[l]--;
            int d=0,z=0;
            for(auto &p:mp){
                if(p.second>0){
                    d++;
                    if(p.second==1){
                        z++;
                    }
                }
            }
            int diff=0;
            if(d>=2){
                diff=fact(d)/fact(d-2);
            }
            int same=d-z;
            int total=diff+same;
            int zero=0;
            if(mp[0]>0){
                zero=d-1;
                if(mp[0]>=2){
                    zero=zero+1;
                }
            }
            ans+=(total-zero);
            mp[l]++;
        }
        return ans;
    }
};