class Solution {
public:
    int solve(string &text1, string &text2, int i, int j, vector<vector<int>>& dp) {
        if (i < 0 || j < 0) return 0;

        if (dp[i][j] != -1) return dp[i][j];

        if (text1[i] == text2[j]) 
            return dp[i][j] = 1 + solve(text1, text2, i - 1, j - 1, dp);
        
        return dp[i][j] = max(solve(text1, text2, i - 1, j, dp),
                              solve(text1, text2, i, j - 1, dp));
    }

    int longestCommonSubsequence(string text1, string text2) {
        int s1 = text1.size();
        int s2 = text2.size();
        vector<vector<int>> dp(s1, vector<int>(s2, -1));

        return solve(text1, text2, s1 - 1, s2 - 1, dp);
    }
};
