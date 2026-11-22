class Solution {
public:
    bool checkString(string s) {
         unordered_set<char>a;
         a.insert(s[0]);
         int n=s.size();
         for(int i=1;i<n;i++){
            if(s[i]=='a'&&a.find('b')!=a.end()){
                return false;
            }
            a.insert(s[i]);
         }
         return true;        
    }
};