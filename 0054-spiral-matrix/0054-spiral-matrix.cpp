class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      vector<int> result;
      if(matrix.size()==0)
      return result;
      int rowbegin=0;
      int rowend=matrix.size()-1;
      int colbegin=0;
      int colend=matrix[0].size()-1;
      while(rowbegin<=rowend && colbegin<=colend){
        // this is for traversing from left to right
      for(int i=colbegin ; i<=colend;i++){
        result.push_back(matrix[rowbegin][i]);
      }
      rowbegin++;
      // this is for traversing from top to bottom
      for(int i=rowbegin;i<=rowend;i++){
        result.push_back(matrix[i][colend]);
      }
      colend--;
      // travering from right to left
      if(rowbegin<=rowend){
        for(int i=colend;i>=colbegin;i--){
            result.push_back(matrix[rowend][i]);
        }
      }
      rowend--;
      // traversing from down to top
      if(colbegin<=colend){
        for(int j=rowend; j>=rowbegin; j--){
            result.push_back(matrix[j][colbegin]);
        }
        }
        colbegin++;
        }
        return result;
      
    }
};