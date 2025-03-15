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
        vector<int> dp(n + 1, -1);
        return min(ways(dp, n - 1, cost), ways(dp, n - 2, cost));
    }
};
