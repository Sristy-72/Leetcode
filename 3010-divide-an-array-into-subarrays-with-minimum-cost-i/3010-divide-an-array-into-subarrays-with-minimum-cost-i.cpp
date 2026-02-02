class Solution {
public:

    int minimumCost(vector<int>& nums) {
        int n= nums.size();
        int ans= nums[0];
        int cnt=1;
        int smallest=INT_MAX;
        int sec_smallest= INT_MAX;
        for(int i=1;i<n;i++){
         if(nums[i]<smallest){
            sec_smallest=smallest;
            smallest=nums[i];
         }
         else if(nums[i] < sec_smallest){
            sec_smallest= nums[i];
         }
        }
        ans= ans+ smallest+sec_smallest;
        return ans;
    }
};