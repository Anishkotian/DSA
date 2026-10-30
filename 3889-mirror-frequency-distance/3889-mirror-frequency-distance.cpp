class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> freq(36,0);
        for(char c:s){
            if(c>='a'&&c<='z'){
                freq[c-'a']++;
            }
            else{
                freq[c-'0'+26]++;
            }
        }
        int ans=0;
        for(int i=0;i<36;i++){
            int mir;
            if(i<26){
                mir=25-i;
            }
            else{
                mir=61-i;
            }
            if(i<mir){
                ans+=abs(freq[i]-freq[mir]);
            }
        }
        return ans;
    }
};