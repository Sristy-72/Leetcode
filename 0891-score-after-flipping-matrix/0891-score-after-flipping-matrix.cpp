class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
         int m = grid.size(), n = grid[0].size();
        int ans = 0;
        // Flip the rows with a leading 0.
        for (auto& row : grid) {
            if (row[0] == 0) {
                for (int i = 0; i < n; ++i) {
                    row[i] ^= 1;
                }
            }
        }
        // Flip the columns with 1s < 0s.
        for (int j = 0; j < n; ++j) {
            int ones = 0;
            for (int i = 0; i < m; ++i) {
                ones += grid[i][j];
            }
            if (ones * 2 < m) {
                for (int i = 0; i < m; ++i) {
                    grid[i][j] ^= 1;
                }
            }
        }
        // Add up the scores of each row.
        for (auto& row : grid) {
            int score = 0;
            for (int i = 0; i < n; ++i) {
                score += row[i] << (n - i - 1);
            }
            ans += score;
        }
        return ans;
    }
};