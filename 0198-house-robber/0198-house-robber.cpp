class Solution {
public:
int solve(vector<int>&nums, int ind, vector<int>&dp){
     if (ind < 0) return 0;  
    if(ind==0) return nums[0];
    if(dp[ind]!=-1) return dp[ind];
    int pick= 0;
   
    if(ind>=1){
         pick= nums[ind]+ solve(nums, ind-2, dp);
    }
     int not_pick= solve(nums, ind-1, dp);
    return dp[ind]=max(pick, not_pick);
}
    int rob(vector<int>& nums) {
        int n= nums.size();
        vector<int>dp(n,-1);
          return solve(nums, n-1, dp);
    }
};