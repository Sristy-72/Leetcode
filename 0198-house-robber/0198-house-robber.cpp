class Solution {
public:
int solve(vector<int>&nums, int ind,vector<int>&dp){
    if(ind==0) return nums[0];
    if(ind<0) return 0;
      if(dp[ind]!=-1) return dp[ind];
       int  pick=nums[ind]+solve(nums,ind-2,dp);
        int  not_pick=solve(nums, ind-1,dp);
    return dp[ind]= max(pick, not_pick);

}
    int rob(vector<int>& nums) {
        int n= nums.size();
          vector<int>dp(n);
          //return solve(nums,n-1,dp);
         if(n==0) return 0;
         if(n==1) return nums[0];
        //    dp[0]=nums[0];
        //    dp[1]= max(nums[0], nums[1]);
        //   for(int i=2;i<n;i++){
        //     int pick= nums[i]+dp[i-2];
        //     int not_pick= dp[i-1];
        //     dp[i]=max(pick, not_pick);
        //   }
        //   return dp[n-1];

        int prev2= nums[0];
        int prev = max(nums[0], nums[1]);
        for(int i=2;i<n;i++){
            int take= nums[i]+prev2;
            int not_take=prev;
            int curr= max(take, not_take);
            prev2= prev;
            prev= curr;
        }
        return prev;
    }
};