class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n=skill.size();
        int l=0;
        int r=n-1;
        int sum=skill[l]+skill[r];
        long long ans=0;
        while(l<r){
            if(skill[l]+skill[r]!=sum){
                return -1;
            }
            ans+=(long long)skill[l]*skill[r];
            l++;
            r--;
        }
        return ans;
    }
};