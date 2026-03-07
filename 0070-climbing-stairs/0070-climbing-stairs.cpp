class Solution {
public:
int solve(vector<int>&dp, int ind){
   if(ind==0) return 1;
   if(ind<0) return 0;
   if(dp[ind]!=-1) return dp[ind];
   dp[ind]=solve(dp, ind-1)+ solve(dp, ind-2);  
   return dp[ind];
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
       return solve(dp,n);
    }
};