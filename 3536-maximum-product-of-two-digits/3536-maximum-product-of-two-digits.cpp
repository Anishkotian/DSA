class Solution {
public:
    int maxProduct(int n) {
        priority_queue<int>maxh;
        while(n>0){
            maxh.push(n%10);
            n=n/10;
        }
        int x=maxh.top();
        maxh.pop();
        int y=maxh.top();
        return x*y;
    }
};