class Solution {
public:
int solve(vector<int>&dp, int ind, vector<int>&nums){
    if(ind==0) return nums[0];
    if(ind==1) return max(nums[0], nums[1]);
     if(dp[ind]!=-1) return dp[ind];
     
    dp[ind]=max((nums[ind]+solve(dp,ind-2,nums)), solve(dp, ind-1,nums));
    return dp[ind];
}
    int rob(vector<int>& nums) {
        int n= nums.size();
       vector<int>dp(n,-1); 
       return solve(dp, n-1,nums);
    }
};