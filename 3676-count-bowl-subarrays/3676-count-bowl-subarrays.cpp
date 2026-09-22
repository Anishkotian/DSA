class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        long long ans=0;
        stack<int>st;              
        for(int i=0;i<nums.size();i++){
            while(!st.empty()&&nums[st.top()]<nums[i]){
                st.pop();
                if(!st.empty()&&i-st.top()>1){
                    ans++;
                }
            }
            st.push(i);
        }
        return ans;
    }
};