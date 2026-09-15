class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans=0;
        int m=0,p=0,g=0;
        for(int i=0;i<garbage.size();i++){
            ans+=garbage[i].size();
            if(garbage[i].find('M')!=string::npos){
                m=i;
            }
            if(garbage[i].find('P')!=string::npos){
                p=i;
            }
            if(garbage[i].find('G')!=string::npos){
                g=i;
            }
        }
        for(int i=0;i<m;i++){
            ans+=travel[i];
        }
        for(int i=0;i<p;i++){
            ans+=travel[i];
        }
        for(int i=0;i<g;i++){
            ans+=travel[i];
        }
        return ans;
    }
};