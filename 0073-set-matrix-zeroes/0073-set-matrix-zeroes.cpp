class Solution {
public:
// void markrowzero(vector<vector<int>>&matrix, int i){
//      int n= matrix[0].size();
//     for(int j=0;j<n;j++){
//         if(matrix[i][j]!=0){
//             matrix[i][j]=INT_MIN+1;
//         }
//     }
// }
// void markcolzero(vector<vector<int>>&matrix, int j){
// int m= matrix.size();
// for(int i=0;i<m;i++){
//     if(matrix[i][j]!=0){
//         matrix[i][j]=INT_MIN+1;
//     }
// }
// }
    void setZeroes(vector<vector<int>>& matrix) {
       int m= matrix.size();
    int n= matrix[0].size();
   vector<int>row(m,0), col(n,0);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
               // markrowzero(matrix,i);
               // markcolzero(matrix,j);
                 row[i]=1;
                 col[j]=1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row[i]|| col[j]){
                matrix[i][j]=0;
            }
        }
    }

    }
};