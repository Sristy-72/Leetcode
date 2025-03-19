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
    //   vector<vector<int>>dp(n, vector<int>(amount+1,-1) );

    //    int ans=solve(dp,coins,n-1,amount);
    
     vector<vector<int>>dp(n, vector<int>(amount+1,1e9) );
    for(int i=0;i<=amount;i++){
        if(i%coins[0]==0){
             dp[0][i]= i/coins[0];
        }
        else
        dp[0][amount]= 1e9;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<=amount;j++){
            int notTake=dp[i-1][j];
            int take= 1e9;
            if(coins[i]<=j){
                take=1+ dp[i][j-coins[i]];
            }
            dp[i][j]= min(take,notTake);
        }
    }
    int ans= dp[n-1][amount];
       if(ans>=1e9)
       return -1;
       return ans;
    }
};