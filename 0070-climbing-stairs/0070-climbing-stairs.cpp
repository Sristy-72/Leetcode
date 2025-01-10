class Solution {
public:
    int climbStairs(int n) {
    //   if(n<=1) return 1;
    //  return climbStairs(n-1)+climbStairs(n-2);  -----> time limit exceeded


    // tabulation approch
    // vector<int>dp(n+1, -1);
    // dp[0]=1;
    // dp[1]=1;
    // for(int i=2;i<=n;i++){
    //     dp[i]=dp[i-1]+dp[i-2];
    // }
    // return dp[n];

    // memorization
    int prev2=1;
    int prev=1;
    for(int i=2;i<=n;i++){
        int curr= prev2+prev;
        prev2=prev;
        prev=curr;
    }
    return prev;
    }
};