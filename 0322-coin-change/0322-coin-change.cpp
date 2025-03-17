class Solution {
public:
int solve(int ind, int target, vector<int>&coins, vector<vector<int>>&dp){
 if(ind==0) {
    if(target%coins[ind]==0){
    return target/coins[0]; 
 }
 else
 return 1e9;
 }
 if(dp[ind][target]!=-1) return dp[ind][target];
int take= 1e9;
int notTake= 0+solve(ind-1,target,coins,dp);
if(target>=coins[ind]){
    take= 1+ solve(ind,target-coins[ind],coins, dp);
}
return dp[ind][target]= min( take, notTake);
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=solve(n-1,amount,coins,dp);
    if(ans>=1e9)
    return -1;
    return ans;
    }
};