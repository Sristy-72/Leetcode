class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n=matrix[0].size();
        vector<int>ans;
        int srow=0;
        int scol=0;
        int erow=m-1;
        int ecol= n-1;
        while(srow<=erow && scol<=ecol){
            // Top row
            for (int i = scol; i <= ecol; i++)
                ans.push_back(matrix[srow][i]);
            srow++;

            // Right column
            for (int i = srow; i <= erow; i++)
                ans.push_back(matrix[i][ecol]);
            ecol--;

            // Bottom row
            if (srow <= erow) {
                for (int i = ecol; i >= scol; i--)
                    ans.push_back(matrix[erow][i]);
                erow--;
            }

            // Left column
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--)
                    ans.push_back(matrix[i][scol]);
                scol++;
            }

        }
        return ans;
    }
};