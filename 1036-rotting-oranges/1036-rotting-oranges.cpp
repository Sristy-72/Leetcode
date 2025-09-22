class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
       int m= grid.size();
       int n= grid[0].size();
       vector<vector<int>>vis(m,vector<int>(n,0));
       queue<pair<pair<int,int>,int>>q;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==2){
                q.push({{i,j},0});
                vis[i][j]=2;
            }
            else{
                vis[i][j]=0;
            }
        }
       } 
       int tm=0;
       int deltarow[]={-1,0,1,0};
       int deltacol[]={0,1,0,-1};
       while(!q.empty()){
        int row=q.front().first.first;
        int col= q.front().first.second;
        int t=q.front().second;
        tm=max(tm,t);
        q.pop();
        for(int i=0;i<4;i++){
           int nrow= row+deltarow[i];
           int ncol=col+deltacol[i];
           if( nrow>=0 && nrow<m && ncol>=0 && ncol<n &&vis[nrow][ncol]!=2  && grid[nrow][ncol]==1 ){
            q.push({{nrow,ncol},t+1});
            vis[nrow][ncol]=2;
                       }
        }
       }
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1 && vis[i][j]!=2) return -1;
        }
       }
       return tm;
    }
};