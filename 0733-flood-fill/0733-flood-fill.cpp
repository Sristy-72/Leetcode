class Solution {
public:
void dfs(vector<vector<int>>&image, int sr, int sc, int color,int inicolor, int delrow[], int delcol[], vector<vector<int>>&copy){
    int n= image.size();
    int m=image[0].size();
     copy[sr][sc]= color;
     for(int i=0;i<4;i++){
        int nrow=sr+delrow[i];
        int ncol= sc+delcol[i];
    if(nrow>=0 && nrow<n && ncol>=0 && ncol< m && image[nrow][ncol]==inicolor && copy[nrow][ncol]!=color  ){
    dfs(image, nrow, ncol,color, inicolor, delrow, delcol, copy);
    }
     }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n= image.size();
        int m=image[0].size();
        int inicolor=image[sr][sc];
        vector<vector<int>>copy= image;
       int delrow[]={-1,0,1,0};
       int delcol[]={0,1,0,-1};
        dfs(image, sr, sc, color, inicolor, delrow, delcol, copy);
       return copy;
    }
};