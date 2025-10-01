class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m= matrix.size();//row size
        int n= matrix[0].size();//col size
        int x=1;
        int y=1;
         for(int j=0;j<m;j++){
        if(matrix[j][0]==0){
            x=0;
        }
       }
       for(int i=0;i<n;i++){
        if(matrix[0][i]==0){
            y=0;
        }
       } 
      
       for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][j]==0){
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
       }

       for(int j=1;j<n;j++){
        if(matrix[0][j]==0){
            for(int i=1;i<m;i++){
                matrix[i][j]=0;
            }
        }
       }
       for(int j=1;j<m;j++){
        if(matrix[j][0]==0){
            for(int i=1;i<n;i++){
                matrix[j][i]=0;
            }
        }
       }
       if(x==0){
        for(int i=0;i<m;i++){
            matrix[i][0]=0;
        }
       }
       if(y==0){
        for(int j=0;j<n;j++){
            matrix[0][j]=0;
        }
       }
    }
};