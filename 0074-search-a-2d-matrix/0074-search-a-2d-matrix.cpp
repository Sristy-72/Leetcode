class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int m= matrix.size();
     int n= matrix[0].size();
    
     int stRow=0;
     int endRow=m-1;
    
     int stCol= 0;
    int endCol= n-1;
   
     
    while(stRow<=endRow){
         int midRow = stRow+ (endRow-stRow)/2;
        if(matrix[midRow][0]==target) return true;
        else if(matrix[midRow][0]<=target && matrix[midRow][endCol]>=target) {
            int midCol= (stCol+endCol)/2;
            if(matrix[midRow][midCol]==target) return true;
            else if(matrix[midRow][midCol]>target)endCol= midCol-1;
            else  stCol= midCol+1;
           
        }
        else if(matrix[midRow][0]<target) stRow= midRow+1;
        else endRow= midRow-1;
        
       
    }
  return false;
    }
};