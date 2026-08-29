class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        int n=arr.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=abs((long long)arr[i]-brr[i]);
        }
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        long long sum1=k;
        for(int i=0;i<n;i++){
            sum1+=abs((long long)arr[i]-brr[i]);
        }
        return min(sum,sum1);
    }
};