class Solution {
public:
    int bits(int n){
        int count=0;
        while(n>0){
            count+=n%2;
            n=n/2;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[&](int a,int b){
            if(bits(a)==bits(b)){
                return a<b;
            }
            return bits(a)<bits(b);
    });
        return arr;
    }
};