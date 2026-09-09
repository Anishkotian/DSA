class Solution {
public:
    bool vowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }

    long long fun(string s,int k){
        unordered_map<char,int> m;
        int l=0,c=0;
        long long ans=0;              
        for(int r=0;r<s.size();r++){
            if(vowel(s[r]))
                m[s[r]]++;
            else
                c++;
            while(c>=k&&m.size()==5){
                ans+=s.size()-r;
                if(vowel(s[l])){
                    m[s[l]]--;
                    if(m[s[l]]==0)
                        m.erase(s[l]);
                }
                else
                    c--;
                l++;
            }
        }
        return ans;
    }

    long long countOfSubstrings(string word,int k) {
        return fun(word,k)-fun(word,k+1);
    }
};