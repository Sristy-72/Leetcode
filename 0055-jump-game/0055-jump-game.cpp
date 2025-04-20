class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        int lastindex=n-1;
       for(int i=n-2;i>=0;i--){
        int jump= nums[i]+i;
        if(jump>=lastindex){
            lastindex=i;
        }
       } 
       return lastindex==0?true : false;
    }
};