class Solution {
public:
    vector<int> prime(int x){
        vector<int>ans;
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                ans.push_back(i);
                while(x%i==0){
                    x/=i;
                }
            }
        }
        if(x>1){
            ans.push_back(x);
        }

        return ans;
    }
    int longestSubarray(vector<int>& nums,int k) {
        int n=nums.size();

        unordered_map<int,vector<int>>mp;

        for(int x:nums){
            mp[x]=prime(x);
        }
        set<int>st;
        map<int,int>cnt;
        int l=0;
        int ans=0;
        for(int r=0;r<n;r++){
            for(int x:mp[nums[r]]){
                st.insert(x);
                cnt[x]++;
            }
            while(st.size()>k){
                for(int x:mp[nums[l]]){
                    cnt[x]--;
                    if(cnt[x]==0){
                        cnt.erase(x);
                        st.erase(x);
                    }
                }
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};