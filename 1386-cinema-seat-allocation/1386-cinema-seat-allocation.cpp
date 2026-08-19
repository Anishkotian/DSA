class Solution {
public:
    int maxNumberOfFamilies(int n,vector<vector<int>>& reservedSeats){
        int count=2*n;
        set<vector<int>>s(reservedSeats.begin(),reservedSeats.end());
        set<int>rows;
        for(auto v:reservedSeats){
            rows.insert(v[0]);
        }
        for(int i:rows){
            int x=0,y=0,z=0;
            if(s.find({i,2})==s.end()&&s.find({i,3})==s.end()&&s.find({i,4})==s.end()&&s.find({i,5})==s.end()){
                x=1;
            }
            if(s.find({i,4})==s.end()&&s.find({i,5})==s.end()&&s.find({i,6})==s.end()&&s.find({i,7})==s.end()){
                y=1;
            }
            if(s.find({i,6})==s.end()&&s.find({i,7})==s.end()&&s.find({i,8})==s.end()&&s.find({i,9})==s.end()){
                z=1;
            }
            if(x==1&&z==1){
            }else if(x==1||y==1||z==1){
                count--;
            }else{
                count-=2;
            }
        }
        return count;
    }
};