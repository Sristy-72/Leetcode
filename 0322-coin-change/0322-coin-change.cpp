class Solution {
public:
int solve(vector<vector<int>>&dp,vector<int>&arr, int ind, int target){
  if(ind==0){
    if(target%arr[0]==0){
        return target/arr[0];
    }
    else
    return 1e9;
  }
  if(dp[ind][target]!=-1) return dp[ind][target];
  int notTake= solve(dp,arr, ind-1, target) + 0;
  int take= 1e9;
  if(arr[ind]<=target){
    take= 1+solve(dp,arr, ind,target-arr[ind]);
  }
  return dp[ind][target]= min(take,notTake);
}
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
      vector<vector<int>>dp(n, vector<int>(amount+1,-1) );
       int ans=solve(dp,coins,n-1,amount);
       if(ans>=1e9)
       return -1;
       return ans;
    }
};