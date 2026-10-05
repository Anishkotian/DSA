class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.length();
        vector<int>res;
        int val=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='('){
                res.push_back(val);
                val=0;
            }else{
                if(s[i-1]=='('){ 
                    val=res.back()+1;
                }else{
                    val=res.back()+(2*val);
                }
                res.pop_back();
            }
        }
        return val;
    }
};