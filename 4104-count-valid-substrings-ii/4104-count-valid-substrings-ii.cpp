class Solution {
public:
    long long countValidSubstrings(string s) {
        int n=s.size();
        int x=-1,y=-1,z=-1;
        long long ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                x=i;
            }
            else if(s[i]=='b'&&x!=-1){
                y=x;
            }
            else if(s[i]=='c'&&y!=-1){
                z=y;
            }
            ans+=(i-z);
        }
        return ans;
    }
};