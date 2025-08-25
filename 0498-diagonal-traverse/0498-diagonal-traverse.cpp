class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
     bool up=true;
        int row=mat.size(),col= mat[0].size();
        int r=0,c=0;
        vector<int>ans;
        while(ans.size()<row*col){
            if(up){
                while(r>=0 && c<col){
                    ans.push_back(mat[r][c]);
                   
                    r--;
                    c++;
                }
                up=false;
                if (c >= col) { c = col - 1; r += 2; }
                else { r = 0; }
            }
            else{
                while(r<row && c>=0){
                    ans.push_back(mat[r][c]);
                 
                    r++;
                    c--;
                }
                 up=true;
                if (r >= row) { r = row - 1; c += 2; }
                else { c = 0; }
            }
        }
        return ans;   
    }
};