class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int maxi=0;
        int r=0,l=0;
        int n=s.size();
        for(r=0;r<n;r++){
            mp[s[r]]++;
            while(l<n&&mp[s[r]]>2){
                mp[s[l]]--;
                l++;
            }
            maxi=max(r-l+1,maxi);
        }
        return maxi;
    }
};