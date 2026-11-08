class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int rem;
        long digit=0;
        int temp=x;
        while(x>0)
        {
            rem=x%10;
            digit=digit*10+rem;
            x=x/10;
        }
        if(digit==temp){
        return true;
        }
        return false;
    }
};