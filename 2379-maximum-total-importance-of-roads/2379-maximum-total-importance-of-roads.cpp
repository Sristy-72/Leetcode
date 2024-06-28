class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
      vector<int> degree(n);
        for (const auto& r : roads) {
            ++degree[r[0]];
            ++degree[r[1]];
        }
        sort(begin(degree), end(degree));
        int64_t result = 0;
        for (int i = 0; i < n; ++i) {
            result += (i + 1ll) * degree[i];
        }
        return result;   
    }
};