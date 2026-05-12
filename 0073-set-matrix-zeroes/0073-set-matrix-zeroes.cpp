class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();
        vector<int>dummyRow(m,-1);
        vector<int>dummyCol(n,-1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    dummyRow[i]=0;
                    dummyCol[j]=0;
                }
            }
        }
        for(int i=0;i<m;i++){
            if(dummyRow[i]==0){
                for(int j=0;j<n;j++){
                    matrix[i][j]=0;
                }
            }
        }
         for(int i=0;i<n;i++){
            if(dummyCol[i]==0){
                for(int j=0;j<m;j++){
                    matrix[j][i]=0;
                }
            }
        }
    }
};