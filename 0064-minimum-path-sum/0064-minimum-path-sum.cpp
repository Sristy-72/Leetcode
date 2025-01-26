// class Solution {
// public:

// // MEMOIZATION + RECUSRION

// int solve(vector<vector<int>>&grid, int i, int j, vector<vector<int>>&dp){
//     if(i==0 && j==0) return grid[0][0];
//     if(i<0 || j<0) return INT_MAX;
//     if(dp[i][j]!=-1) return dp[i][j];
//     int up=  solve(grid,i-1,j,dp);
//     int left=  solve(grid,i,j-1,dp);
//     return dp[i][j]=min(up,left) + grid[i][j];
// }
//     int minPathSum(vector<vector<int>>& grid) {
//         int m= grid.size();
//         int n=grid[0].size();
//          vector<vector<int>>dp(m,vector<int>(n,-1));
//           return solve(grid,m-1,n-1,dp);
//     }
// };

class Solution {
public:
int solve(vector<vector<int>>&dp, vector<vector<int>>&grid,int m, int n){
    dp[0][0]= grid[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0) continue;
             int up = (i > 0) ? dp[i - 1][j] : INT_MAX; 
             int left = (j > 0) ? dp[i][j - 1] : INT_MAX;
            dp[i][j]= min(up,left) + grid[i][j];
        }
    }
    return dp[m-1][n-1];
}
    int minPathSum(vector<vector<int>>& grid) {
        int m= grid.size();
        int n= grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        return solve(dp, grid,m,n);
    }
};