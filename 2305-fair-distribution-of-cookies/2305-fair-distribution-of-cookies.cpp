class Solution {
public:
int maxi=INT_MAX;;
    void res(vector<int>& cookies, int k,int idx,vector<int>&child){
        int n=cookies.size();
        if(idx==n){
            int unfair=*max_element(child.begin(),child.end());
            maxi=min(maxi,unfair);
            return; 
        }
        for(int j=0;j<k;j++){
            child[j]+=cookies[idx];
            res(cookies,k,idx+1,child);
            child[j]-=cookies[idx];
        }
   }  
    int distributeCookies(vector<int>& cookies, int k) {
        int n=cookies.size();
        vector<int>child(n,0);
        res(cookies,k,0,child);
        return maxi;
        
    }
};