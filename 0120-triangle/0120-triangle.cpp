class Solution {
public:
int solve(vector<vector<int>>&grid,vector<vector<int>>&dp, int i,int j){
    int n= grid.size();
    if(i== n-1) return grid[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int down=  solve(grid,dp,i+1,j);
    int diagonal =  solve(grid,dp,i+1,j+1);
    return dp[i][j]=  grid[i][j]+ min(down,diagonal);
}
    int minimumTotal(vector<vector<int>>& triangle) {
      int m= triangle.size();
      int p = triangle[0].size();
    vector<vector<int>> dp(m);
        for (int i = 0; i < m; ++i) {
           dp[i] = vector<int>(triangle[i].size(), -1);
}
      return solve(triangle,dp,0,0);

    }
};