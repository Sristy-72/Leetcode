class Solution {
public:
    int ways(vector<int>& dp, int n, vector<int>& cost) {
        if (n == 0) return cost[0];  
        if (n == 1) return cost[1]; 
        if (dp[n] != -1) return dp[n];

        dp[n] = min(ways(dp, n - 1, cost), ways(dp, n - 2, cost)) + cost[n];
        return dp[n];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n , 0);
        //return min(ways(dp, n - 1, cost), ways(dp, n - 2, cost));
        // dp[0]=cost[0];
        // dp[1]=cost[1];
        // for(int i=2;i<n;i++){
        //     dp[i] = min(dp[i-1],dp[i-2])+cost[i];
        // }
        // return min(dp[n-1],dp[n-2]);


        // SPACE OPTIMIZATION
          int prev2=cost[0];
       int prev1=cost[1];
       for(int i=2;i<n;i++){
        int curr=min(prev1,prev2)+cost[i];
        prev2=prev1;
        prev1=curr;
       }
       return min(prev1,prev2);
    }
};
