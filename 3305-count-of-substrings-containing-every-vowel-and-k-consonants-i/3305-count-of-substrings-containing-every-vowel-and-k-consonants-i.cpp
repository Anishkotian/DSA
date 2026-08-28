class Solution {
public:
    bool find(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }

    long long countOfSubstrings(string word, int k) {
        long long ans=0;
        for(int i=0;i<word.size();i++){
            set<char>s;
            int cons=0;
            for(int j=i;j<word.size();j++){
                if(find(word[j])){
                    s.insert(word[j]);
                }
                else{
                    cons++;
                }
                if(cons>k){
                    break;
                }
                if(s.size()==5&&cons==k){
                    ans++;
                }
            }
        }
        return ans;
    }
};