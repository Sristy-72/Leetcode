class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26, INT_MAX);
    for (const string& word : words) {
        vector<int> freq(26, 0);
        for (char c : word) {
            freq[c - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            minFreq[i] = min(minFreq[i], freq[i]);
        }
    }
    vector<string> result;
    for (int i = 0; i < 26; i++) {
        while (minFreq[i] > 0) {
            result.push_back(string(1, i + 'a'));
            minFreq[i]--;
        }
    }

    return result;  
    }
};