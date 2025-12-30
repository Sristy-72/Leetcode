class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int sum=0;
      int maxi=nums[0];
       int n= nums.size();
    for(auto it:nums){
        sum=sum+it;
        maxi=max(sum, maxi);
        if(sum<0) sum=0;
    }
    return maxi;
    }
};