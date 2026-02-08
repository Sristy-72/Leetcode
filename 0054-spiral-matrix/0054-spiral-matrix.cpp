class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n= matrix[0].size();
        vector<int>ans;
        int srow=0;
        int scol=0;
        int endrow=m-1;
        int endcol=n-1;
          while(srow<=endrow && scol<= endcol ){
          for(int j= scol;j<=endcol;j++){
            ans.push_back(matrix[srow][j]);
          }  
          for(int i=srow+1;i<=endrow;i++){
             ans.push_back(matrix[i][endcol]);
          }
         if (srow < endrow) {
                for (int j = endcol - 1; j >= scol; j--) {
                    ans.push_back(matrix[endrow][j]);
                }
            }

            if (scol < endcol) {
                for (int i = endrow - 1; i > srow; i--) {
                    ans.push_back(matrix[i][scol]);
                }
            }
          srow++;
          endrow--;
          endcol--;
          scol++;
          }
    return ans;
    }
};