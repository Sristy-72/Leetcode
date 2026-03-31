class Solution {
public:
void noOfIslands(vector<vector<char>>&grid,vector<vector<int>>&vis,int row, int col ){
    vis[row][col]=1;
    int n= grid.size();
    int m=grid[0].size();
    vector<int>deltarow={1,0,-1,0};
    vector<int>deltacol={0,1,0,-1};
     for(int i=0;i<4;i++){

          int nrow=row+deltarow[i];
          int ncol= col+deltacol[i];
          if((nrow>=0 && nrow<n) && (ncol>=0 && ncol<m) && (grid[nrow][ncol]=='1' && !vis[nrow][ncol])){
            vis[nrow][ncol]=1;
            noOfIslands(grid, vis, nrow,ncol); 
        }  
     }
}
    int numIslands(vector<vector<char>>& grid) {
       int n= grid.size();
       int m= grid[0].size();
       vector<vector<int>>vis(grid.size(), vector<int>(grid[0].size(),0));
      
       int cnt=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
              if(grid[i][j]=='1' && vis[i][j]!=1){
                cnt++;
                noOfIslands(grid, vis, i,j);
              }     
        }
       } 
       return cnt;
    }
};