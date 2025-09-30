// class Solution {
//    
// public:
// // void markrowzero(vector<vector<int>>&matrix, int i){
//      int n= matrix[0].size();
//      for(int j=0;j<n;j++){
//          if(matrix[i][j]!=0){
//              matrix[i][j]=INT_MIN+1;
//          }
//      }
//  }
//  void markcolzero(vector<vector<int>>&matrix, int j){
//  int m= matrix.size();
//  for(int i=0;i<m;i++){
//      if(matrix[i][j]!=0){
//          matrix[i][j]=INT_MIN+1;
//      }
// // }
// // }
//     void setZeroes(vector<vector<int>>& matrix) {
//        int m= matrix.size();
//     int n= matrix[0].size();
//    vector<int>row(m,0), col(n,0);
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(matrix[i][j]==0){
//                // markrowzero(matrix,i);
//                // markcolzero(matrix,j);
//                  row[i]=1;
//                  col[j]=1;
//             }
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(row[i]|| col[j]){// whether row[i] is 1 or col[i] is one it will mark that row
//                 matrix[i][j]=0;
//             }
//         }
//     }

//     }
// };

//my code
class Solution {
public:
    void setZeroes(vector<vector<int>>& mt) {
        // map<int,int>r;
        // map<int,int>c;
        // for(int i=0;i<mt.size();i++){
        //     for(int j=0;j<mt[0].size();j++){
        //         if(mt[i][j]==0){
        //             r[i]++;
        //             c[j]++;
        //         }
        //     }
        // }
        // vector<int>vr(mt.size(),0);
        // for(auto it:r){
        //     if(vr[it.first]==0){
        //         vr[it.first]=1;
        //         for(int i=0;i<mt[0].size();i++){
        //             mt[it.first][i]=0;
        //         }
        //     }
        // }
        // vector<int>vc(mt[0].size(),0);
        // for(auto it:c){
        //     if(vc[it.first]==0){
        //         vc[it.first]=1;
        //         for(int i=0;i<mt.size();i++){
        //             mt[i][it.first]=0;
        //         }
        //     }
        // }

      int m= mt.size();
      int n= mt[0].size();
      int x=1;
      int y=1;
       
        // marking x zero if zero found in first col
        for(int i=0;i<m;i++){
            if(mt[i][0]==0) x=0;
        }
        // marking y zero if zero found in first row
        for(int j=0;j<n;j++){
            if(mt[0][j]==0) y=0;
        }
         for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(mt[i][j]==0){
                    mt[i][0]=0;
                    mt[0][j]=0;
                }
            }
        }
// making entire col zero if zero found in first col
        for(int j=1;j<n;j++){
            if(mt[0][j]==0){
                for(int i=1;i<m;i++){
                    mt[i][j]=0;
                }
            }
        }

 // making entire row zero if zero found in first row       
        for(int i=1;i<m;i++){
            if(mt[i][0]==0){
                for(int j=1;j<n;j++){
                    mt[i][j]=0;
                }
            }
        }
        if(x==0){
            for(int i=0;i<m;i++){
                mt[i][0]=0;
            }
        }
        if(y==0){
            for(int j=0;j<n;j++){
                mt[0][j]=0;
            }
        }
    } 
};