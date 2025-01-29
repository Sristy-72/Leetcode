class Solution {
public:
    int m, n;
    vector<vector<int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    bool solve(vector<vector<char>>& board, string &word, int i, int j, int ind) {
        if (ind == word.length()) return true;
        if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[ind]) return false;

        char temp = board[i][j];
        board[i][j] = '#';  // Mark as visited

        for (auto& dir : directions) {
            int nexti = i + dir[0];
            int nextj = j + dir[1];
            if (solve(board, word, nexti, nextj, ind + 1))
                return true;
        }

        board[i][j] = temp;  // Restore original character
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        if (m == 0) return false;
        n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == word[0] && solve(board, word, i, j, 0))
                    return true;
            }
        }
        return false;
    }
};
