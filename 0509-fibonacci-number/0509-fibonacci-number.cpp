class Solution {
public:
int solve(int ind, vector<int>dp){
    if(ind<=1) return ind;
    if(dp[ind]!=-1) return dp[ind];
    return solve(ind-1,dp)+ solve(ind-2,dp);
}
    int fib(int n) {
   vector<int>dp(n+1, -1);
   return solve(n, dp);    
   
    }
};