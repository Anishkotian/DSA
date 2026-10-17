class Solution {
public:
    int sumi(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        vector<int>a=nums;
        sort(a.begin(),a.end(),[&](int x,int y){
            if(sumi(x)==sumi(y)){
                return x<y;
            }
            return sumi(x)<sumi(y);
        });
        int n=nums.size();
        int cnt=0;
        unordered_map<int,int> pos;
        for(int i=0;i<n;i++){
            pos[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=a[i]){
                int j=pos[a[i]];
                pos[nums[i]]=j;
                pos[a[i]]=i;
                swap(nums[i],nums[j]);
                cnt++;
            }
        }
        return cnt;
    }
};