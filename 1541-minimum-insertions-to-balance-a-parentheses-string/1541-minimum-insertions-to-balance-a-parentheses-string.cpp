
class Solution {
public:
    int minInsertions(string s) {
        int res=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(res%2==1){
                    ans++;
                    res--;
                }
                res+=2;
            }
            else{
                res--;
                if(res<0){
                    ans++;
                    res=1;
                }
            }
        }
        return ans+res;
    }
};