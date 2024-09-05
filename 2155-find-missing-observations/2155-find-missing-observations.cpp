class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
    int m = rolls.size();
        int totalSum = mean * (n + m);
        int sumOfRolls = 0;

        for (int roll : rolls) {
            sumOfRolls += roll;
        }

        int missingSum = totalSum - sumOfRolls;

        if (missingSum < n || missingSum > 6 * n) {
            return {};
        }

        std::vector<int> missing(n, missingSum / n);
        int remainder = missingSum % n;

        for (int i = 0; i < remainder; ++i) {
            missing[i]++;
        }

        return missing;    
    }
};