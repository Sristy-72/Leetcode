class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int maxi=nums[0];
       int curr_sum=0;
       for(int i=0;i<n;i++){
         curr_sum=curr_sum+ nums[i];
         maxi= max(curr_sum, maxi);
         if(curr_sum<0) curr_sum=0;
       } 
       return maxi;
    }
};