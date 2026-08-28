class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            ans.push_back(abs(s[i]-t[i]));
        }
        int l=0;
        int res=0;
        int maxi=0;
        for(int r=0;r<s.size();r++){
            res+=ans[r];
        
        while(res>maxCost){
            res-=ans[l];
            l++;
        }
        maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};