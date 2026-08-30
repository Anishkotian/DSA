class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_set<int>s;
        unordered_set<int>no;
        int count=0;
        s.insert(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(i>0&&nums[i-1]!=nums[i]){
                if(s.find(nums[i])!=s.end()){
                    no.insert(nums[i]);
                }
            }
            s.insert(nums[i]);
        }
        
        return s.size()-no.size();
    }
};