class Solution{
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l=0;
        int c=0;
        string ans="";
        for(int r=0;r<s.size();r++){
            if(s[r]=='1'){
                c++;
            }
            while(c>k){
                if(s[l]=='1'){
                    c--;
                }
                l++;
            }
            while(l<=r&&s[l]=='0'){
                l++;
            }
            if(c==k){
                string x=s.substr(l,r-l+1);
                if(ans==""||x.size()<ans.size()||(x.size()==ans.size()&&x<ans)){
                    ans=x;
                }
            }
        }
        return ans;
    }
};