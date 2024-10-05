class Solution {
public:
  bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        // If s1 is longer than s2, it cannot be a substring
        if (n > m) return false;

        // Sort the string s1
        string sorted_s1 = s1;
        sort(sorted_s1.begin(), sorted_s1.end());

        // Iterate over each substring of s2 of length equal to s1
        for (int i = 0; i <= m - n; i++) {
            // Extract a substring of length n from s2 starting at index i
            string temp = s2.substr(i, n);

            // Sort the substring
            sort(temp.begin(), temp.end());

            // If the sorted substring matches the sorted s1, return true
            if (temp == sorted_s1) return true;
        }

        // No permutation found in s2
        return false;
    }
};