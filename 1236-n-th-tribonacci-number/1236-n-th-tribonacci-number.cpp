class Solution {
public:
int solve(int ind, vector<int>&dp){
    if(ind==0) return 0;
    if(ind==2 || ind==1) return 1;
    if(dp[ind]!=-1) return dp[ind];

    return dp[ind]=solve(ind-1, dp)+solve(ind-2,dp)+solve(ind-3,dp);
}
    int tribonacci(int n) {
      vector<int>dp(n+1,-1);
     return solve(n, dp);
    }
};