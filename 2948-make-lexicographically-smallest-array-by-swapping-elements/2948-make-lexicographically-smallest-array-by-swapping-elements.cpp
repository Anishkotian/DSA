class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n=nums.size();
        vector<pair<int,int>>a;
        for(int i=0;i<n;i++){
            a.push_back({nums[i],i});
        }
        sort(a.begin(),a.end());
        int i=0;
        while(i<n){
            int j=i;
            while(j+1<n && a[j+1].first-a[j].first<=limit){
                j++;
            }
            vector<int>val;
            vector<int>ind;
            for(int k=i;k<=j;k++){
                val.push_back(a[k].first);
                ind.push_back(a[k].second);
            }
            sort(ind.begin(),ind.end());
            for(int k=0;k<val.size();k++){
                nums[ind[k]]=val[k];
            }
            i=j+1;
        }
        return nums;
    }
};