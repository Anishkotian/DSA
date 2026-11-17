class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>ans;
        int maxlen=0,left=0;
        for(int right=0;right<s.size();right++){
            char c=s[right];
            if(ans.find(c)!=ans.end() &&ans[c]>=left ){
                left=ans[c]+1;
            }
            ans[c]=right;
            maxlen=max(maxlen,right-left+1);

        }
        return maxlen;
    }
};