class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt=0;
        int n=arr1.size();
        int m=arr2.size();
        for(int i=0;i<n;i++){
            int x=1;
            for(int j=0;j<m;j++){
                //if(i==j){
                   // continue;
               // }
                if(abs(arr1[i]-arr2[j])<=d){
                    x=0;
                    break;
                }
            }
            if(x==1){
                cnt++;
            }
        }
        return cnt;
    }
};