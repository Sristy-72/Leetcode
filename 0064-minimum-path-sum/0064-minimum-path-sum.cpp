class Solution {
public:
int solve(vector<vector<int>>&grid, int i, int j, vector<vector<int>>&dp){
    if(i==0 && j==0) return grid[0][0];
    if(i<0 || j<0) return INT_MAX;
    if(dp[i][j]!=-1) return dp[i][j];
    int up=  solve(grid,i-1,j,dp);
    int left=  solve(grid,i,j-1,dp);
    return dp[i][j]=min(up,left) + grid[i][j];
}
    int minPathSum(vector<vector<int>>& grid) {
        int m= grid.size();
        int n=grid[0].size();
         vector<vector<int>>dp(m,vector<int>(n,-1));
          return solve(grid,m-1,n-1,dp);
    }
};