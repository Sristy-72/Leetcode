class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        int n= grid.size();
        int m= grid[0].size();
        int row=0;
        int col=m-1;

        while(row<n && col>=0){
            if(grid[row][col]<0){
                cnt+=(n-row);
                col--;
            }
            else{
                row++;
            }
        }
        return cnt;
    }
};