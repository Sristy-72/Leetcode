class Solution {
public:
   int solve( int n , vector<int>&dp){
    if(n<=1) return n;
       if(dp[n]!=-1) return dp[n]; 
       return solve(n-1, dp)+solve(n-2, dp);
   }
    int fib(int n) {
        vector<int>dp(n+1);
        // return   solve(n, dp);
         if (n <= 1) return n;
        int prev1= 1;
        int prev2=0;
        for(int i=2;i<=n;i++){
            int curr= prev1+prev2;
            prev2= prev1;
            prev1=curr;
        }
        return prev1;
    }
};