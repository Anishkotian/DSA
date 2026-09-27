class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            string ans="";
            if(s[i]==')'){
                while(!st.empty()&&st.top()!='('){
                    ans.push_back(st.top());
                    st.pop();
                }
            
            st.pop();
            for(char ch:ans){
                st.push(ch);
            }
            }
            else{
                st.push(s[i]);
            }
        }
        string res="";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;  
    }
};