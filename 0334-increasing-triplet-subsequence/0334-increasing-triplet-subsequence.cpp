class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n= nums.size();
        
         int first= INT_MAX;
         int second= INT_MAX;
        for(int l =0;l<n;l++){
           if(nums[l]<= first){
            first=nums[l];
           }
           else if(nums[l]<= second){
            second= nums[l];
           }
           else return true;
        }
        return false;
        
    }
};