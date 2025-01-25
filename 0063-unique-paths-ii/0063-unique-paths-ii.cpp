// class Solution {
// public:

//RECURSION+MEMOIZATION

// int solve(vector<vector<int>>&obstacleGrid,int i,int j,vector<vector<int>>&dp){
//        if (i < 0 || j < 0) return 0; 
//         if (obstacleGrid[i][j] == 1) return 0; 
//         if (i == 0 && j == 0) return 1;
//         if (dp[i][j] != -1) return dp[i][j];
//      int up= solve(obstacleGrid,i-1,j,dp);
//      int left= solve(obstacleGrid,i,j-1,dp);
//      return dp[i][j]=up+left;
// }
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m= obstacleGrid.size();
//         int n=obstacleGrid[0].size();
//         if (obstacleGrid[0][0] == 1 || obstacleGrid[m - 1][n - 1] == 1) return 0;
//        vector<vector<int>>dp(m,vector<int>(n,-1));
//        return solve(obstacleGrid,m-1,n-1,dp); 
//     }
// };


// TABULATION 

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
         if (obstacleGrid[0][0] == 1) return 0;
        dp[0][0]=1;
        for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
            
             if(obstacleGrid[i][j]==1) dp[i][j]=0;
            else{
                int up=0;
                 int left=0;
                if(i>0) up=dp[i-1][j];
                if(j>0)left=dp[i][j-1];
                 dp[i][j]+=left+up;
            }
           }
           
        }
        return dp[m-1][n-1];
    }
};