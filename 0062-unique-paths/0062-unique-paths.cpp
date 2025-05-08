// class Solution {
// public:
// int solve(int m,int n,vector<vector<int>>&dp){
//     if(m==0 && n==0) return 1;
//     if(n<0 || m<0) return 0;
//     if(dp[m][n] != -1) return dp[m][n];
//     int up= solve(m-1,n,dp);
//     int from= solve(m,n-1,dp);
//     return dp[m][n]= up+from;
// }
//     int uniquePaths(int m, int n) {
//         vector<vector<int>>dp(m,vector<int>(n,-1));
//         return solve(m-1,n-1,dp);
//     }
// };

class Solution {
  public:
   int uniquePaths(int m, int n) {
    vector<vector<int>>dp(m,vector<int>(n,0));
    dp[0][0]=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         if(i>0) dp[i][j]+=dp[i-1][j];
         if(j>0)dp[i][j]+= dp[i][j-1];
    }
    }
    return dp[m-1][n-1];
    

     
    
    // for(int col=0;col<n;col++){
    // dp[0][col]=1;
    // }
    // for(int row=0;row<m;row++){
    //     dp[row][0]=1;
    // }
    // for(int i=1;i<m;i++){
    //     for(int j=1;j<n;j++){
    //         dp[i][j]=dp[i-1][j]+ dp[i][j-1];
    //     }
    // }
    // return dp[m-1][n-1];
   }
};