class Solution {
public:
int solve(vector<int>&dp, int ind, vector<int>&cost){
    if(ind==0) return cost[0];
    if(ind==1) return cost[1];
    if(dp[ind]!=-1) return dp[ind];
    dp[ind]= min(solve(dp, ind-1, cost), solve(dp, ind-2, cost))+ cost[ind];
    return dp[ind];

}
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
       vector<int>dp(n,-1);
       return min(solve(dp, n-1, cost), solve(dp,n-2,cost)); 
    }
};