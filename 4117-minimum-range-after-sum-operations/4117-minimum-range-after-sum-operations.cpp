class Solution {
public:
    int minRange(int a, int b, int c) {
        int x=max({a,b,c});
        int y=min({a,b,c});
        int z=a+b+c-x-y;
        if(x>=y+z){
            return z;
        }
        return x-y;
    }
};