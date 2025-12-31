class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();
       vector<int>dummyrow(m,-1);
       vector<int>dummycol(n,-1);
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                dummyrow[i]=1;
                dummycol[j]=1;
            }
        }
       }
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(dummyrow[i]==1 || dummycol[j]==1){
                matrix[i][j]=0;
            }
        }
       }
    }
};