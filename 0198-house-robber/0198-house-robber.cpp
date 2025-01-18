class Solution {
public:
int solve(vector<int>&nums, int ind,vector<int>&dp){

//    if(ind==0) return nums[ind];
//    if(ind<0) return 0;
//       int pick = nums[ind] + solve(nums,ind-2);
//       int nonpick= 0+ solve(nums, ind-1);
//       return max(pick,nonpick);
   

   if(ind==0) return nums[ind];
   if(ind<0) return 0;
   if(dp[ind]!= -1) return dp[ind];
   int pick = nums[ind] + solve(nums, ind-2, dp);
   int nonpick = 0 + solve(nums, ind-1, dp);
   return dp[ind]= max(pick, nonpick);

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
      vector<int>dp(n,-1);
       return solve(nums,n-1,dp); 
    }
};