class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int i=0;
        while(i<s.size()){
            int cnt=0;
            int st=i;
            while(i<s.size()){
                if(s[i]=='('){
                    cnt++;
                }else{
                    cnt--;
                }
                i++;
                if(cnt==0){
                    break;
                }
            }
            for(int j=st+1;j<i-1;j++){
                ans+=s[j];
            }
        }
        return ans;
    }
};