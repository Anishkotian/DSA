class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n=nums.size();
        vector<int>a=nums;
        sort(a.begin(),a.end());
        int sum=0;
        for(int k=1;k<=n;k++){
            if(n%k!=0)continue;
            int d=1;
            for(int i=0;i<n;i+=k){
                vector<int>x,y;
                for(int j=0;j<k;j++){
                    x.push_back(nums[i+j]);
                    y.push_back(a[i+j]);
                }
                sort(x.begin(),x.end());
                if(x!=y){
                    d=0;
                    break;
                }
                int cnt=0;
                for(int j=0;j<k;j++){
                    if(nums[i+j]>nums[i+(j+1)%k]){
                        cnt++;
                    }
                }
                if(cnt>1){
                    d=0;
                    break;
                }
            }
            if(d==1){
                sum+=k;
            }
        }
        return sum;
    }
};