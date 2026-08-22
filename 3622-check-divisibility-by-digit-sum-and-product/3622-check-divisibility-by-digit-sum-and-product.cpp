class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int prod=1;
        int x=n;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            prod*=rem;
            n=n/10;
        }
        if(x%(sum+prod)==0){
            return true;
        }
        return false;
        
    }
};