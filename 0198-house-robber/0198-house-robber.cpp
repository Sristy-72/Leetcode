class Solution {
public:
int solve(vector<int>&nums, int n,vector<int>&dp){

    // 1st :- recursion method (TLE)
    // if(ind==0) return nums[ind];
    // if(ind<0)return 0;
    // int pick= nums[ind]+solve(nums,ind-2);
    // int nonpick= 0+ solve(nums,ind-1);
    // return max(pick, nonpick);

    // memoization approach(memory limit exceeded)
   
    // if(ind==0) return nums[ind];
    // if(ind<0) return 0;
    // if(dp[ind]!=-1) return dp[ind];
    // int pick=nums[ind]+solve(nums,ind-2, dp);
    // int nonpick=0+solve(nums,ind-1,dp);
    // return dp[ind]= max(pick, nonpick);

    // tabulation method
     dp[0] = nums[0];
     for(int i=1;i<nums.size();i++){
         int pick =nums[i];
        if(i>1)
      
       pick += dp[i-2];
       int nonpick= dp[i-1];
      
         dp[i]= max(pick,nonpick);
     }
     return dp[n-1];

     }
    int rob(vector<int>& nums) {
        int n=nums.size();
      vector<int>dp(n,-1);
       return solve(nums,n, dp); 
    }
};