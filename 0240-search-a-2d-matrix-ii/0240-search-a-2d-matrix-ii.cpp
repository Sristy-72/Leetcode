class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        // int k= m.size();
        // int n= m[0].size();
        // for(int i=0;i<k;i++){
        //     int stCol=i;
        //     int endCol=n-1;
        //     while(stCol<=endCol){
        //         int mid=stCol + (endCol-stCol)/2;
        //         if(m[i][mid]==target) return true;
        //         else if(m[i][mid]>target) endCol= mid-1;
        //         else stCol= mid=1; 
        //     }
        // }
        // return false;
        
         int k= m.size();
         int n= m[0].size();
        int row=0;
        int col= n-1;
        
        while(row<k && col>=0){
             int mid= m[0][col];
            if(m[row][col]==target) return true;
            else if(m[row][col]<target) row++;
            else col--;
        }
        return false;
    }
};